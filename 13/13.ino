// Interfacing Arduino uno with LDR sensor
const int ledPin = 3; // digital pin 3 
const int ldrPin = A0; // analog pin 0
void setup() { // The setup() function will only run once, after each powerup or reset of the Arduino board.
Serial.begin(9600);
pinMode(ledPin, OUTPUT); // Here LED is determined as an output or an indicator.
pinMode(ldrPin, INPUT); // Here LDR sensor is determined as input.
}
void loop() { // Void loop is ran again and again and contains main code.
int ldrStatus = analogRead(ldrPin);
if (ldrStatus <= 800) {analogWrite(ledPin, 1024-ldrStatus);
Serial.println(ldrStatus);
} else {
analogWrite(ledPin, 0);
Serial.println(ldrStatus);
}
}