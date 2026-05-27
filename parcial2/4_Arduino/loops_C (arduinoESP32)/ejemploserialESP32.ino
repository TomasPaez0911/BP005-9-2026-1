const int LED_PIN = 2; // Pin del LED

void setup() { 
    pinMode(LED_PIN, OUTPUT); // Configura el pin como salida 
    Serial.begin(115200);     // Inicia la comunicación serial 
} 

void loop() { 
    int n = 3; // Cantidad de parpadeos deseados 

    // Bucle para hacer parpadear el LED 'n' veces
    for (int i = 1; i <= n; i++) { 
        digitalWrite(LED_PIN, HIGH); // Enciende el LED 
        delay(250);                  // Espera 250 ms 
        
        digitalWrite(LED_PIN, LOW);  // Apaga el LED 
        delay(250);                  // Espera 250 ms 
    } 

    // Mensaje de seguimiento en el Monitor Serie
    Serial.println("Secuencia completada."); 
    delay(1500); // Pausa de 1.5 segundos antes de volver a empezar
}
