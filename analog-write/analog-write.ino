#define ANALOG_OUT_PIN 3
#define SECOND 1000

void setup() {
  pinMode(ANALOG_OUT_PIN, OUTPUT);
  
}

void loop() {
  static int out = 0;

  while (out < 255) {
    analogWrite(ANALOG_OUT_PIN, out);
    delay(0.001 * SECOND);
    out++;
  }
  while (out > 0) {
    analogWrite(ANALOG_OUT_PIN, out);
    delay(0.001 * SECOND);
    out--;
  }
  
  // for (int i = 0; i < 255; i++) {
  //   analogWrite(ANALOG_OUT_PIN, i);
  //   delay(0.01 * SECOND);
  // }
}
