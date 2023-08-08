
#define INPUT_PIN 3
const int sec = 1000;

void setup() {
  Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(INPUT_PIN, INPUT);

  digitalWrite(LED_BUILTIN, HIGH);
}

void loop() {

  // digitalWrite(LED_BUILTIN, HIGH);
  // delay(0.01 * sec);

  Serial.println(digitalRead(INPUT_PIN));
  delay(0.5 * sec);

  // digitalWrite(LED_BUILTIN, LOW);
  // delay(0.99 * sec);

}
