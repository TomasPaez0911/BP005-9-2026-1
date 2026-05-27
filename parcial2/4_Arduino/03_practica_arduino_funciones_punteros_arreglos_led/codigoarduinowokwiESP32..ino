/*
 * Práctica: Lectura de Potenciómetro y Control de LED usando Arreglos y Punteros (Adaptado para ESP32)
 * Archivo: practica_final_potenciometro_led_arreglo_punteros_esp32.ino
 */

// --- 1. Definición de Constantes (Configuración de Pines y Parámetros) ---
// NOTA: En el ESP32, el GPIO 34 es un pin analógico excelente (ADC1).
// El GPIO 25 soporta salida analógica/PWM.
const int PIN_POTENCIOMETRO = 34;  
const int PIN_LED = 25;            

const int CANTIDAD_LECTURAS = 10;  // Tamaño del arreglo para el historial de muestras
const int TIEMPO_MUESTRA = 50;     // Tiempo de espera en milisegundos entre lecturas individuales
const int TIEMPO_CICLO = 1000;     // Tiempo de espera entre cada ciclo completo del reporte

// Configuración de PWM para ESP32
const int FRECUENCIA_PWM = 5000;   // 5 kHz es ideal para LEDs
const int CANAL_PWM = 0;           // El ESP32 usa canales (0-15) para controlar PWM
const int RESOLUCION_PWM = 8;      // 8 bits de resolución (valores de 0 a 255, igual que Arduino)

// --- 2. Configuración Inicial del Sistema ---
void setup() {
  // En el ESP32 se acostumbra usar velocidades más altas (115200 baudios)
  Serial.begin(115200);
  
  // Configuración del PWM en el ESP32 utilizando la API moderna (compatible con ESP32 de cualquier núcleo)
  ledcAttachChannel(PIN_LED, FRECUENCIA_PWM, RESOLUCION_PWM, CANAL_PWM);
  
  Serial.println("==================================================");
  Serial.println(" ESP32 INICIALIZADO: CONTROL DE LED CON PUNTEROS  ");
  Serial.println("==================================================");
}

// --- 3. Ciclo Principal del Programa ---
void loop() {
  int historialLecturas[CANTIDAD_LECTURAS];
  
  float promedioCalculado = 0.0;
  int valorMinimo = 0;
  int valorMaximo = 0;

  // Paso 1: Tomar las 10 muestras consecutivas
  tomarLecturas(historialLecturas, CANTIDAD_LECTURAS);

  // Paso 2: Analizar los datos usando PUNTEROS de salida
  analizarLecturas(historialLecturas, CANTIDAD_LECTURAS, &promedioCalculado, &valorMinimo, &valorMaximo);

  // Paso 3: Controlar el brillo del LED a partir del promedio
  controlarBrilloLED(promedioCalculado);

  // Paso 4: Mostrar el reporte detallado en el Monitor Serial
  mostrarReporte(promedioCalculado, valorMinimo, valorMaximo);

  delay(TIEMPO_CICLO);
}

// --- 4. Definición de Funciones Propias ---

/**
 * Llena el arreglo realizando lecturas analógicas.
 * En el ESP32 el rango de lectura es de 0 a 4095.
 */
void tomarLecturas(int arreglo[], int tamano) {
  for (int i = 0; i < tamano; i++) {
    arreglo[i] = analogRead(PIN_POTENCIOMETRO);  // Lee el GPIO 34
    delay(TIEMPO_MUESTRA);                        
  }
}

/**
 * Procesa el arreglo mediante punteros. 
 * Esta lógica matemática se mantiene intacta.
 */
void analizarLecturas(const int arreglo[], int tamano, float *promedio, int *minimo, int *maximo) {
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

  *promedio = (float)sumaTotal / tamano;
  *minimo = tempMin;
  *maximo = tempMax;
}

/**
 * Traduce el promedio analógico del ESP32 (0 a 4095) al rango del canal PWM (0 a 255).
 */
void controlarBrilloLED(float promedioValor) {
  // Ajustamos el rango de mapeo: el máximo del ADC ahora es 4095 en lugar de 1023
  int valorPWM = map((int)promedioValor, 0, 4095, 0, 255);
  
  // En ESP32 usamos ledcWrite apuntando al pin o al canal según la versión de la librería
  ledcWrite(PIN_LED, valorPWM);
}

/**
 * Imprime el reporte ajustando la matemática para los 3.3V y 12 bits de resolución.
 */
void mostrarReporte(float promedio, int minimo, int maximo) {
  // Fórmula ajustada para el ESP32: (promedio * 3.3V) / 4095.0
  float voltajeEquivalente = (promedio * 3.3) / 4095.0;

  Serial.print("[REPORTE ESP32] -> ");
  Serial.print("Muestras: ");
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
