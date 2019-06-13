#include <SoftwareSerial.h>

SoftwareSerial SerialCriada(2, 3); // RX, TX.
void setup() {
    // Abre a serial para enviar dados
    Serial.begin(9600);// Velocidade de 9600 bits por segundo.
    Serial.println("Envie o que quiser!");
    SerialCriada.begin(4800);// Velocidade de 4800 bits por segundo.
}

void loop() {
    if (Serial.available()) {// Se a serial tiver dados em seu buffer.
        SerialCriada.write(Serial.read());//Escreve na serial dados a SerialCriada
    }
}

