/*
 * Práctica: Lectura de Potenciómetro y Control de LED usando Arreglos y Punteros
 * Archivo: practica_final_potenciometro_led_arreglo_punteros.ino
 */

// --- 1. Definición de Constantes (Configuración de Pines y Parámetros) ---
const int PIN_POTENCIOMETRO = A0;  // Pin analógico para leer el potenciómetro
const int PIN_LED = 9;             // Pin digital PWM para controlar el brillo del LED

const int CANTIDAD_LECTURAS = 10;  // Tamaño del arreglo para el historial de muestras
const int TIEMPO_MUESTRA = 50;     // Tiempo de espera en milisegundos entre lecturas individuales
const int TIEMPO_CICLO = 1000;     // Tiempo de espera entre cada ciclo completo del reporte

// --- 2. Configuración Inicial del Sistema ---
void setup() {
  // Inicializar la comunicación serial a 9600 baudios para el reporte en pantalla
  Serial.begin(9600);
  
  // Configurar el pin del LED como salida
  pinMode(PIN_LED, OUTPUT);
  
  Serial.println("==================================================");
  Serial.println("SISTEMA INICIALIZADO: CONTROL DE LED CON PUNTEROS");
  Serial.println("==================================================");
}

// --- 3. Ciclo Principal del Programa ---
void loop() {
  // Declaración del arreglo que guardará las muestras locales
  int historialLecturas[CANTIDAD_LECTURAS];
  
  // Variables locales donde recibiremos los resultados calculados por la función
  float promedioCalculado = 0.0;
  int valorMinimo = 0;
  int valorMaximo = 0;

  // Paso 1: Tomar las 10 muestras consecutivas
  tomarLecturas(historialLecturas, CANTIDAD_LECTURAS);

  // Paso 2: Analizar los datos usando PUNTEROS de salida
  // Pasamos las direcciones de memoria de nuestras variables usando el operador '&'
  analizarLecturas(historialLecturas, CANTIDAD_LECTURAS, &promedioCalculado, &valorMinimo, &valorMaximo);

  // Paso 3: Controlar el brillo del LED a partir del promedio
  controlarBrilloLED(promedioCalculado);

  // Paso 4: Mostrar el reporte detallado en el Monitor Serial
  mostrarReporte(promedioCalculado, valorMinimo, valorMaximo);

  // Pausa antes de repetir el proceso completo
  delay(TIEMPO_CICLO);
}

// --- 4. Definición de Funciones Propias ---

/**
 * Llena el arreglo realizando lecturas analógicas espaciadas por un tiempo corto.
 * En C, los arreglos se pasan automáticamente por referencia (dirección de su primer elemento).
 */
void tomarLecturas(int arreglo[], int tamano) {
  for (int i = 0; i < tamano; i++) {
    arreglo[i] = analogRead(PIN_POTENCIOMETRO);  // Leer el pin A0
    delay(TIEMPO_MUESTRA);                        // Breve pausa para estabilidad
  }
}

/**
 * Procesa el arreglo y devuelve 3 respuestas distintas modificando directamente 
 * las variables originales externas a través de PUNTEROS (*).
 */
void analizarLecturas(const int arreglo[], int tamano, float *promedio, int *minimo, int *maximo) {
  // Validación de seguridad para asegurar que las direcciones recibidas no sean nulas
  if (promedio == NULL || minimo == NULL || maximo == NULL) {
    return; 
  }

  long sumaTotal = 0;
  int tempMin = arreglo[0];
  int tempMax = arreglo[0];

  for (int i = 0; i < tamano; i++) {
    sumaTotal += arreglo[i];
    
    if (arreglo[i] < tempMin) {
      tempMin = arreglo[i];
    }
    if (arreglo[i] > tempMax) {
      tempMax = arreglo[i];
    }
  }

  // Desreferenciamos (*) para escribir los resultados directamente en la memoria del loop()
  *promedio = (float)sumaTotal / tamano;
  *minimo = tempMin;
  *maximo = tempMax;
}

/**
 * Traduce el promedio de la lectura analógica (0 a 1023) al rango PWM (0 a 255)
 * para cambiar el ciclo de trabajo eléctrico y variar el brillo del LED.
 */
void controlarBrilloLED(float promedioValor) {
  // Mapear el rango de entrada analógica al rango de salida PWM
  int valorPWM = map((int)promedioValor, 0, 1023, 0, 255);
  
  // Escribir el valor PWM en el pin digital 9
  analogWrite(PIN_LED, valorPWM);
}

/**
 * Imprime el estado del procesamiento actual de manera limpia y clara en la consola.
 */
void mostrarReporte(float promedio, int minimo, int maximo) {
  float voltajeEquivalente = (promedio * 5.0) / 1023.0;

  Serial.print("[REPORTE] -> ");
  Serial.print("Muestras analizadas: ");
  Serial.print(CANTIDAD_LECTURAS);
  Serial.print(" | Min: ");
  Serial.print(minimo);
  Serial.print(" | Max: ");
  Serial.print(maximo);
  Serial.print(" | Promedio Analógico: ");
  Serial.print(promedio, 2);
  Serial.print(" | Voltaje Promedio: ");
  Serial.print(voltajeEquivalente, 2);
  Serial.println(" V");
}
