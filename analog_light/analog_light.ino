#define SECOND 1000
#define LED_OUT 13

void setup() {
  Serial.begin(9600);
  pinMode(LED_OUT, OUTPUT);
}

void loop() {
  // delay(0.5 * SECOND);

  int sensor_value = analogRead(A0);
  
  Serial.print("light sensor analog input value ( x / 1023):  ");
  Serial.println(sensor_value);

  // analogWrite(LED_OUT, sensor_value / 4);
  analogWrite(LED_OUT, sensor_value);
}
