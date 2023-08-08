#define IN_SENSOR 2
#define SECOND 1000

int sensor_history[2] = {-1, -1};

void setup() {
  Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(IN_SENSOR, INPUT_PULLUP);

}

bool is_changed() {
  return sensor_history[0] != sensor_history[1] && sensor_history[0] + sensor_history[1] > 0;
}

void loop() {

  static int sensor_value = digitalRead(IN_SENSOR);
  sensor_history[1] = sensor_history;

  static bool is_on = false;

  Serial.println(sensor_value);

  if (is_changed()) {
    is_on = sensor_value == HIGH;
  }

  if (is_on) {
    digitalWrite(LED_BUILTIN, LOW);
  } else {
    digitalWrite(LED_BUILTIN, HIGH);
  }

  sensor_history[0] = sensor_history;
  
}
