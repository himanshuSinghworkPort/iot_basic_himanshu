
// the setup function runs once when you press reset or power the board

int buzzerPin=13;

void setup() {
  // initialize digital pin buzzerPin as an output.
  pinMode(buzzerPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(buzzerPin, HIGH);  // turn the Buzzer on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(buzzerPin, LOW);   // turn the Buzzer off by making the voltage LOW
  delay(1000);                      // wait for a second
}
