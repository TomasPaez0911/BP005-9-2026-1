 const int LED1 = 2; // LED 1
 const int LED2 = 4; // LED 2
 const int LED3 = 5; // LED 3

 void setup() {
 pinMode(LED1, OUTPUT); // Configura LED1 como salida
 pinMode(LED2, OUTPUT); // Configura LED2 como salida
 pinMode(LED3, OUTPUT); // Configura LED3 como salida
}
 void loop() {
 digitalWrite(LED1, HIGH); // Enciende LED1
 digitalWrite(LED2, LOW); // Apaga LED2
 digitalWrite(LED3, LOW); // Apaga LED3
 delay(250); // Espera
 digitalWrite(LED1, LOW); // Apaga LED1
 digitalWrite(LED2, HIGH); // Enciende LED2
 digitalWrite(LED3, LOW); // Apaga LED3
 delay(250); // Espera
 digitalWrite(LED1, LOW); // Apaga LED1
 digitalWrite(LED2, LOW); // Apaga LED2
 digitalWrite(LED3, HIGH); // Enciende LED3
 delay(250); // Espera
 }
