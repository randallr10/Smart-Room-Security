int ledPin = 13;
int sensorPin = 2;
int pirStat = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin(115200);
}

void loop(){
  sensorPin = digitalRead(sensorPin);
  if (sensorPin == HIGH) {
    Serial.println("Motion Detected!");
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
    Serial.println("No Motion Detected!");
  }
}