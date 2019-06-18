#include <SoftwareSerial.h>

// RX, TX.
SoftwareSerial SerialCriada(2, 3);

void setup() {
    // Abre a serial para enviar dados
    Serial.begin(9600);

    // Velocidade de 9600 bits por segundo.
    Serial.println("Envie o que quiser!");

    // Velocidade de 4800 bits por segundo.
    SerialCriada.begin(4800);
}

void loop() {
    // Se a serial tiver dados em seu buffer.
    if (Serial.available()) {
        //Escreve na serial dados a SerialCriada
        SerialCriada.write(Serial.read());
    }
}

