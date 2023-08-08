const int out_led = 3;
const int in_sensor = 2;

void setup() {

  //start serial connection

  Serial.begin(9600);

  pinMode(in_sensor, INPUT_PULLUP);

  pinMode(13, OUTPUT);
  pinMode(out_led, OUTPUT);

}

void loop() {
  int digital_sensor = digitalRead(in_sensor);

  Serial.println(digital_sensor);

  if (digital_sensor == HIGH) {

    analogWrite(13, LOW);
    analogWrite(out_led, LOW);

  } else {

    analogWrite(13, HIGH);
    analogWrite(out_led, HIGH);

  }
}