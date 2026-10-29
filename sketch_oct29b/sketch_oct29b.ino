int ledPin = 13;
int sensorPin = 2;
int sensorState = LOW;
int sensorValue = 0;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop() {
  Serial.println("LED ON");
  digitalWrite(ledPin, HIGH);
  delay(500);

  Serial.println("LED OFF");
  digitalWrite(ledPin, LOW);
  delay(1000);
}