const int ledPin_1 = 3;  // LED connected to digital pin 3
const int ledPin_2 = 5;


void setup() {
  pinMode(ledPin_1,OUTPUT);
  pinMode(ledPin_2,OUTPUT);
  
}

void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin_1, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin_1, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin_2, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin_2, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
}
