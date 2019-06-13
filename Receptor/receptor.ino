#include <SoftwareSerial.h>

SoftwareSerial SerialCriada(2, 3); // RX, TX
void setup() {
    // Abre a serial para receber dados
    Serial.begin(9600);// Velocidade de 960000 bits por segundo.
    Serial.println("Aguarde pelos dados.");
    SerialCriada.begin(4800);// Velocidade de 4800 bits por segundo.
}

void loop() {
    if (SerialCriada.available()) {// Se a serial tiver dados em seu buffer.
        Serial.write(SerialCriada.read());//Escreve na serial dados a SerialCriada
    }
}
