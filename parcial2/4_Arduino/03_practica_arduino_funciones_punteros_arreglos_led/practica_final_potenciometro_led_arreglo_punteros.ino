/* Práctica final Arduino + potenciómetro + LED + funciones + punteros + arreglo.
  
  El programa realiza lo siguiente:
  1. Toma varias lecturas del potenciómetro.
  2. Guarda las lecturas en un arreglo.
  3. Calcula promedio, mínimo y máximo.
  4. Convierte el promedio a voltaje, porcentaje y brillo PWM.
  5. Controla el LED según el porcentaje promedio.
  6. Muestra los resultados por el Monitor Serial.
*/

// --- Constantes del sistema ---
const int PIN_POTENCIOMETRO = A0;
const int PIN_LED = 9;
const int ADC_MAX = 1023;
const int PWM_MAX = 255;
const float VREF = 5.0;

// --- Parámetros de configuración ---
const int CANTIDAD_LECTURAS = 10;
const int PAUSA_ENTRE_LECTURAS_MS = 20;
const int PAUSA_CICLO_MS = 1000;
const int UMBRAL_LED = 50;

// --- Configuración inicial ---
void setup() {
    /* Iniciamos comunicación serial a 9600 bps. */
    Serial.begin(9600);
    /* Configuramos el pin del LED como salida. */
    pinMode(PIN_LED, OUTPUT);
}

// --- Bucle principal del programa ---
void loop() {
    /* Arreglo local para almacenar varias lecturas ADC. */
    int lecturas[CANTIDAD_LECTURAS];
    
    /* Variables para resultados del análisis. */
    int promedio = 0;
    int minimo = 0;
    int maximo = 0;
    
    /* Variables para resultados convertidos. */
    float voltaje = 0.0;
    int porcentaje = 0;
    int brilloPWM = 0;
    
    /* Variable para el estado del LED. */
    int estadoLED = LOW;

    /* 1. Tomamos varias lecturas y las guardamos en el arreglo. */
    tomarLecturas(PIN_POTENCIOMETRO, lecturas, CANTIDAD_LECTURAS, PAUSA_ENTRE_LECTURAS_MS);
    
    /* 2. Analizamos el arreglo usando punteros de salida. */
    analizarLecturas(lecturas, CANTIDAD_LECTURAS, &promedio, &minimo, &maximo);
    
    /* 3. Convertimos el promedio a voltaje, porcentaje y PWM. */
    convertirPromedio(promedio, &voltaje, &porcentaje, &brilloPWM);
    
    /* 4. Decidimos si el LED debe encenderse o apagarse. */
    decidirEstadoLED(porcentaje, UMBRAL_LED, &estadoLED);
    
    /* 5. Aplicamos el estado y el brillo al LED. */
    aplicarSalidaLED(PIN_LED, estadoLED, brilloPWM);
    
    /* 6. Mostramos el arreglo y el reporte completo. */
    mostrarLecturas(lecturas, CANTIDAD_LECTURAS);
    mostrarReporte(promedio, minimo, maximo, voltaje, porcentaje, brilloPWM, estadoLED);
    
    /* Pausa antes de iniciar el siguiente ciclo de análisis. */
    delay(PAUSA_CICLO_MS);
}

// --- Definición de Funciones Especializadas ---

/**
 * Toma múltiples muestras analógicas consecutivas y las almacena en un arreglo.
 */
void tomarLecturas(int pin, int datos[], int cantidad, int pausaMs) {
    /* Verificamos que el arreglo sea válido y que la cantidad tenga sentido. */
    if (datos == nullptr || cantidad <= 0) {
        return;
    }
    /* Guardamos una lectura ADC en cada posición del arreglo. */
    for (int i = 0; i < cantidad; i++) {
        datos[i] = analogRead(pin);
        delay(pausaMs);
    }
}

/**
 * Procesa el arreglo de datos para calcular el promedio, el mínimo y el máximo
 * devolviendo los resultados mediante punteros.
 */
void analizarLecturas(int datos[], int cantidad, int *promedio, int *minimo, int *maximo) {
    /* Verificamos que las direcciones recibidas sean válidas. */
    if (datos == nullptr || promedio == nullptr || minimo == nullptr || maximo == nullptr || cantidad <= 0) {
        return;
    }
    
    /* La suma puede crecer bastante, por eso usamos long. */
    long suma = 0;
    
    /* Tomamos el primer dato como referencia inicial para comparar. */
    *minimo = datos[0];
    *maximo = datos[0];
    
    /* Recorremos todas las lecturas. */
    for (int i = 0; i < cantidad; i++) {
        /* Acumulamos la lectura actual. */
        suma = suma + datos[i];
        
        /* Si encontramos una lectura menor, actualizamos el mínimo. */
        if (datos[i] < *minimo) {
            *minimo = datos[i];
        }
        /* Si encontramos una lectura mayor, actualizamos el máximo. */
        if (datos[i] > *maximo) {
            *maximo = datos[i];
        }
    }
    /* Guardamos el promedio en la variable externa apuntada por promedio. */
    *promedio = (int)(suma / cantidad);
}

/**
 * Transforma la lectura promedio del ADC a escalas físicas y de control (voltios, % y PWM).
 */
void convertirPromedio(int promedioADC, float *voltaje, int *porcentaje, int *brilloPWM) {
    /* Verificamos que los punteros de salida sean válidos. */
    if (voltaje == nullptr || porcentaje == nullptr || brilloPWM == nullptr) {
        return;
    }
    /* Convertimos ADC a voltaje aproximado. */
    *voltaje = (promedioADC * VREF) / ADC_MAX;
    
    /* Convertimos ADC a porcentaje usando long para evitar desbordamiento en el cálculo. */
    *porcentaje = (int)((long)promedioADC * 100L / ADC_MAX);
    
    /* Convertimos ADC a valor PWM entre 0 y 255. */
    *brilloPWM = (int)((long)promedioADC * PWM_MAX / ADC_MAX);
}

/**
 * Evalúa si el porcentaje medido supera el umbral establecido para activar el LED.
 */
void decidirEstadoLED(int porcentaje, int umbral, int *estadoLED) {
    /* Verificamos que el puntero de salida sea válido. */
    if (estadoLED == nullptr) {
        return;
    }
    /* El LED se considera activo si el porcentaje supera o iguala el umbral. */
    if (porcentaje >= umbral) {
        *estadoLED = HIGH;
    } else {
        *estadoLED = LOW;
    }
}

/**
 * Controla físicamente el hardware del LED aplicando un apagado total o una intensidad PWM.
 */
void aplicarSalidaLED(int pinLED, int estadoLED, int brilloPWM) {
    /* Si el estado es LOW, apagamos el LED por completo. */
    if (estadoLED == LOW) {
        analogWrite(pinLED, 0);
    } else {
        /* Si el estado es HIGH, aplicamos el brillo modulado calculado. */
        analogWrite(pinLED, brilloPWM);
    }
}

/**
 * Muestra la lista de muestras crudas almacenadas en el arreglo por el puerto serial.
 */
void mostrarLecturas(int datos[], int cantidad) {
    /* Verificamos que el arreglo sea válido. */
    if (datos == nullptr || cantidad <= 0) {
        return;
    }
    Serial.print("Lecturas: ");
    /* Imprimimos todos los valores del arreglo separados por un espacio. */
    for (int i = 0; i < cantidad; i++) {
        Serial.print(datos[i]);
        Serial.print(" ");
    }
    Serial.println();
}

/**
 * Imprime un reporte formateado y legible con todas las métricas analizadas del sistema.
 */
void mostrarReporte(int promedio, int minimo, int maximo, float voltaje, int porcentaje, int brilloPWM, int estadoLED) {
    /* Mostramos un reporte completo del ciclo actual en el Monitor Serial. */
    Serial.print("Promedio ADC = ");
    Serial.println(promedio);
    
    Serial.print("Minimo ADC   = ");
    Serial.println(minimo);
    
    Serial.print("Maximo ADC   = ");
    Serial.println(maximo);
    
    Serial.print("Voltaje      = ");
    Serial.print(voltaje, 2);
    Serial.println(" V");
    
    Serial.print("Porcentaje   = ");
    Serial.print(porcentaje);
    Serial.println(" %");
    
    Serial.print("Brillo PWM   = ");
    Serial.println(brilloPWM);
    
    Serial.print("LED          = ");
    if (estadoLED == HIGH) {
        Serial.println("ENCENDIDO");
    } else {
        Serial.println("APAGADO");
    }
    Serial.println("----------------------------------------");
}
