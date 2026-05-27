 const int LED1 = 2; // Primer LED
 const int LED2 = 4; // Segundo LED

 void setup() {
 pinMode(LED1, OUTPUT); // Configura LED1
 pinMode(LED2, OUTPUT); // Configura LED2
 }

 void loop() {
 digitalWrite(LED1, HIGH); // Enciende LED1
 digitalWrite(LED2, LOW); // Apaga LED2
 delay(400); // Espera

 digitalWrite(LED1, LOW); // Apaga LED1
 digitalWrite(LED2, HIGH); // Enciende LED2
 delay(400); // Espera
 }
