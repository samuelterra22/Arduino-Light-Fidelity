#include <SoftwareSerial.h>

// RX, TX
SoftwareSerial SerialCriada(2, 3);

void setup() {
    // Abre a serial para receber dados
    Serial.begin(9600);

    // Velocidade de 960000 bits por segundo.
    Serial.println("Aguarde pelos dados.");

    // Velocidade de 4800 bits por segundo.
    SerialCriada.begin(4800);
}

void loop() {
    // Se a serial tiver dados em seu buffer.
    if (SerialCriada.available()) {
        //Escreve na serial dados a SerialCriada
        Serial.write(SerialCriada.read());
    }
}
