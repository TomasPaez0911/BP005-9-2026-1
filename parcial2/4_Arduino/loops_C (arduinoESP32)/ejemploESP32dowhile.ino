 const int LED_PIN = 2; // Pin del LED

 void setup() {
 pinMode(LED_PIN, OUTPUT); // Configura el pin como salida
 }

 void loop() {
 int contador = 1; // Variable de control

 do {
 digitalWrite(LED_PIN, HIGH); // Enciende el LED
 delay(200); // Espera

 digitalWrite(LED_PIN, LOW); // Apaga el LED
 delay(200); // Espera

 contador++; // Actualiza el contador
 } while (contador <= 4); // Verifica la condicion al final

delay(1200); // Pausa antes de repetir la secuencia completa
 }
