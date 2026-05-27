const int LED1 = 2; // Primer LED
const int LED2 = 4; // Segundo LED

void setup() { 
    pinMode(LED1, OUTPUT); // Configura LED1 como salida
    pinMode(LED2, OUTPUT); // Configura LED2 como salida
} 

void loop() { 
    // Repite la secuencia alternada 3 veces
    for (int i = 1; i <= 3; i++) {
        digitalWrite(LED1, HIGH); // Enciende LED1
        digitalWrite(LED2, LOW);  // Apaga LED2
        delay(300);               // Espera 300 ms
        
        digitalWrite(LED1, LOW);  // Apaga LED1
        digitalWrite(LED2, HIGH); // Enciende LED2
        delay(300);               // Espera 300 ms
    }
    
    // Estado final conocido (apaga ambos después del bucle)
    digitalWrite(LED1, LOW); 
    digitalWrite(LED2, LOW); 
    delay(1000); // Pausa de 1 segundo antes de reiniciar el loop
}
