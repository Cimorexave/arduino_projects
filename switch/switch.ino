#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_val() {
    // Seed the random number generator with the current time (only once)
    static int seed_initialized = 0;
    if (!seed_initialized) {
        srand(time(NULL));
        seed_initialized = 1;
    }

    int random_integer = rand();

    int range_min = 100;
    int range_max = 1000;
    int random_value = (random_integer % (range_max - range_min + 1)) + range_min;

    return random_value;
}

const int INPUT_BUTTON = 2;


void setup() {
  Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(INPUT_BUTTON, INPUT);

}

void loop() {
  // int random_value = random_val();
  int sec= 1000;

  Serial.println(digitalRead(INPUT_BUTTON));

  digitalWrite(LED_BUILTIN, HIGH);
  delay(10);

  Serial.println(digitalRead(INPUT_BUTTON));

  digitalWrite(LED_BUILTIN, LOW);
  delay(5 * sec);
  
}
