// Pin var
int ledPin = 8;
int buzzerPin = 9; 
int tiltPin = 10;


void setup() {
  //set up
  pinMode (ledPin, OUTPUT);
  pinMode (buzzerPin, OUTPUT);
  pinMode (tiltPin, INPUT_PULLUP);
 //make sure led and buzzer are turned off
 digitalWrite(ledPin, LOW);
 digitalWrite(buzzerPin, LOW);
 
}

void loop() {
  if (digitalRead(tiltPin) == HIGH){
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  }

}
