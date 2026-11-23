const int pirPin = 2;     // PIR sensor signal pin
const int ledPin = 13;    // Built-in LED pin

int pirState = LOW;       // Tracks previous state to avoid spam
int motionValue = 0;      // Stores current sensor reading

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
  
  Serial.println("Calibrating PIR sensor...");
  delay(30000);           // Wait 30 seconds for sensor to stabilize
  Serial.println("Sensor ready.");
}

void loop() {
  Serial.println("THIS IS FIRST");
  motionValue = digitalRead(pirPin);

  if (motionValue == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn LED on
    if (pirState == LOW) {
      Serial.println("Motion detected!");
      pirState = HIGH;
    }
  } else {
    digitalWrite(ledPin, LOW);  // Turn LED off
    if (pirState == HIGH) {
      Serial.println("Motion ended...");
      pirState = LOW;
    }
  }
}