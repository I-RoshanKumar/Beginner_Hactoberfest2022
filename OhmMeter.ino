int v=5;
float r1=10000;
float r2=0.0f;
float input=0.0f;

void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
}

void loop() {
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (v / 1023.0);
  r2=r1*(voltage/(v-voltage));
  Serial.println(r2);
  delay(100);
}