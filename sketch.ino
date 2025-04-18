// Define the LED pins
const int leds[] = {16, 4, 0, 2, 15}; // array of the 5 LED pins

// Define the switch pins
const int switchs[] = {17, 18, 19}; // array of the 3 switch pins

// Variable to hold the current mode
volatile int mode = 0;

// Debounce variables
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() {
  // Initialise the LED pins as outputs
  for (int i = 0; i < 5; i++) {
    pinMode(leds[i], OUTPUT);
  }

  // Initialise the switch pins as inputs with pull-up resistors
  for (int i = 0; i < 3; i++) {
    pinMode(switchs[i], INPUT_PULLUP);
  }

  // Attach interrupts to the switch pins
  attachInterrupt(digitalPinToInterrupt(switchs[0]), switch1Pressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(switchs[1]), switch2Pressed, FALLING);
  attachInterrupt(digitalPinToInterrupt(switchs[2]), switch3Pressed, FALLING);
}

void loop() {
  if (mode == 1) {
    // Mode 1: All LEDs ON
    for (int i = 0; i < 5; i++) {
      digitalWrite(leds[i], HIGH);
    }
  } else if (mode == 2) {
    // Mode 2: All LEDs OFF
    for (int i = 0; i < 5; i++) {
      digitalWrite(leds[i], LOW);
    }
  } else if (mode == 3) {
    // Mode 3: Running lights
    for (int i = 0; i < 5; i++) {
      digitalWrite(leds[i], HIGH);
      delay(200);
      digitalWrite(leds[i], LOW);
    }
  }
}

// Interrupt service routines (ISR) for each switch
void switch1Pressed() {
  if (millis() - lastDebounceTime > debounceDelay) {
    mode = 1;
    lastDebounceTime = millis();
  }
}

void switch2Pressed() {
  if (millis() - lastDebounceTime > debounceDelay) {
    mode = 2;
    lastDebounceTime = millis();
  }
}

void switch3Pressed() {
  if (millis() - lastDebounceTime > debounceDelay) {
    mode = 3;
    lastDebounceTime = millis();
  }
}
