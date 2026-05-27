const int LED_PIN = 2; // Pin del LED

 void setup() {
 pinMode(LED_PIN, OUTPUT); // Configura el pin como salida
 }

 void loop() {
 for (int i = 1; i <= 5; i++) { // Repite exactamente 5 veces
 digitalWrite(LED_PIN, HIGH); // Enciende el LED
 delay(300); // Espera

 digitalWrite(LED_PIN, LOW); // Apaga el LED
 delay(300); // Espera
 }

 delay(1500); // Pausa antes de repetir la secuencia completa
 }
