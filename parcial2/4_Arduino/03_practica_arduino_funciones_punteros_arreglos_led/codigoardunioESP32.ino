/*
  Práctica final adaptada para ESP32
  ESP32 + potenciómetro + LED + funciones + punteros + arreglo.
*/

// --- CONSTANTES MODIFICADAS PARA ESP32 ---
const int PIN_POTENCIOMETRO = 34; // GPIO 34 (Entrada Analógica ADC1)
const int PIN_LED = 2;            // GPIO 2 (Pin del LED)
const int ADC_MAX = 4095;         // ESP32 tiene resolución de 12 bits
const int PWM_MAX = 255;          // Rango estándar de analogWrite (8 bits)
const float VREF = 3.3;           // ESP32 trabaja a 3.3V

// --- CONSTANTES DE CONFIGURACIÓN ---
const int CANTIDAD_LECTURAS = 10;
const int PAUSA_ENTRE_LECTURAS_MS = 20;
const int PAUSA_CICLO_MS = 1000;
const int UMBRAL_LED = 50; // Umbral en porcentaje (50%)

// --- FUNCIONES (Mantienen la misma lógica analítica) ---

void tomarLecturas(int pin, int datos[], int cantidad, int pausaMs) {
  if (datos == nullptr || cantidad <= 0) return;
  
  for (int i = 0; i < cantidad; i++) {
    datos[i] = analogRead(pin); // Lee entre 0 y 4095
    delay(pausaMs);
  }
}

void analizarLecturas(int datos[], int cantidad, int *promedio, int *minimo, int *maximo) {
  if (datos == nullptr || promedio == nullptr || minimo == nullptr || maximo == nullptr || cantidad <= 0) return;

  long suma = 0;
  *minimo = datos[0];
  *maximo = datos[0];

  for (int i = 0; i < cantidad; i++) {
    suma = suma + datos[i];
    if (datos[i] < *minimo) *minimo = datos[i];
    if (datos[i] > *maximo) *maximo = datos[i];
  }
  *promedio = (int)(suma / cantidad);
}

void convertirPromedio(int promedioADC, float *voltaje, int *porcentaje, int *brilloPWM) {
  if (voltaje == nullptr || porcentaje == nullptr || brilloPWM == nullptr) return;

  // Se usa (long) para evitar desbordamientos en las multiplicaciones
  *voltaje = (promedioADC * VREF) / ADC_MAX;
  *porcentaje = (int)((long)promedioADC * 100L / ADC_MAX);
  *brilloPWM = (int)((long)promedioADC * PWM_MAX / ADC_MAX);
}

void decidirEstadoLED(int porcentaje, int umbral, int *estadoLED) {
  if (estadoLED == nullptr) return;

  if (porcentaje >= umbral) {
    *estadoLED = HIGH;
  } else {
    *estadoLED = LOW;
  }
}

void aplicarSalidaLED(int pinLED, int estadoLED, int brilloPWM) {
  if (estadoLED == LOW) {
    analogWrite(pinLED, 0);
  } else {
    analogWrite(pinLED, brilloPWM); // Controla el brillo en el ESP32
  }
}

void mostrarLecturas(int datos[], int cantidad) {
  if (datos == nullptr || cantidad <= 0) return;
  Serial.print("Lecturas: ");
  for (int i = 0; i < cantidad; i++) {
    Serial.print(datos[i]);
    Serial.print(" ");
  }
  Serial.println();
}

void mostrarReporte(int promedio, int minimo, int maximo, float voltaje, int porcentaje, int brilloPWM, int estadoLED) {
  Serial.print("Promedio ADC = "); Serial.println(promedio);
  Serial.print("Minimo ADC = ");   Serial.println(minimo);
  Serial.print("Maximo ADC = ");   Serial.println(maximo);
  Serial.print("Voltaje = ");      Serial.print(voltaje, 2); Serial.println(" V");
  Serial.print("Porcentaje = ");   Serial.print(porcentaje); Serial.println(" %");
  Serial.print("Brillo PWM = ");   Serial.println(brilloPWM);
  Serial.print("LED = ");
  if (estadoLED == HIGH) {
    Serial.println("ENCENDIDO");
  } else {
    Serial.println("APAGADO");
  }
  Serial.println("----------------------------------------");
}

// --- FLUJO PRINCIPAL ---

void setup() {
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  int lecturas[CANTIDAD_LECTURAS];
  int promedio = 0, minimo = 0, maximo = 0;
  float voltaje = 0.0;
  int porcentaje = 0, brilloPWM = 0;
  int estadoLED = LOW;

  tomarLecturas(PIN_POTENCIOMETRO, lecturas, CANTIDAD_LECTURAS, PAUSA_ENTRE_LECTURAS_MS);
  analizarLecturas(lecturas, CANTIDAD_LECTURAS, &promedio, &minimo, &maximo);
  convertirPromedio(promedio, &voltaje, &porcentaje, &brilloPWM);
  decidirEstadoLED(porcentaje, UMBRAL_LED, &estadoLED);
  aplicarSalidaLED(PIN_LED, estadoLED, brilloPWM);
  
  mostrarLecturas(lecturas, CANTIDAD_LECTURAS);
  mostrarReporte(promedio, minimo, maximo, voltaje, porcentaje, brilloPWM, estadoLED);
  
  delay(PAUSA_CICLO_MS);
}
