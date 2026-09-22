// Macro Pins
#define BUTTON_PIN 23
#define LED_YELLOW_PIN 18
#define LED_GREEN_PIN 19

// Initialize Program
void setup() {
  // Initialize Pin 23 as an internal-pullup input
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  // Initialize Pin 18, 19 as LEDs. Then, define as Low input initially
  pinMode(LED_YELLOW_PIN, OUTPUT);
  pinMode(LED_GREEN_PIN, OUTPUT);
  digitalWrite(LED_YELLOW_PIN, LOW);
  digitalWrite(LED_GREEN_PIN, LOW);
}

// Recurring Logic
void loop() {
  // Read Pin 23 State and store to an Object(Variable)
  bool buttonPressed = (digitalRead(BUTTON_PIN) == LOW);

  // Compare/Read buttonPressed then determine the LEDs state
  digitalWrite(LED_YELLOW_PIN, buttonPressed ? HIGH : LOW);
  digitalWrite(LED_GREEN_PIN, buttonPressed ? LOW : HIGH);
}
