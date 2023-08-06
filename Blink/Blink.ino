/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int EXTRA_LED = 12;

int random_val() {
    // Seed the random number generator with the current time (only once)
    static int seed_initialized = 0;
    if (!seed_initialized) {
        srand(time(NULL));
        seed_initialized = 1;
    }

    // Generate a random integer between 0 and RAND_MAX
    int random_integer = rand();

    // Scale the random integer to the desired range (100 to 3000)
    int range_min = 100;
    int range_max = 1000;
    int random_value = (random_integer % (range_max - range_min + 1)) + range_min;

    return random_value;
}


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(EXTRA_LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int random_time1 = random_val();
  int random_time2 = random_val();
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(EXTRA_LED, LOW);   // turn the LED off by making the voltage LOW
  delay(random_time1);                      // wait for a second
  digitalWrite(EXTRA_LED, HIGH);  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(random_time2);                      // wait for a second
}
