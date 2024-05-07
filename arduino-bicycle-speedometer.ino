int sensor = 8;
int t;
void setup() {
  // put your setup code here, to run once:
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(sensor) == LOW) {
    t = millis();
    while(digitalRead(sensor == LOW) {
      delay(1);
    }
  }
}
