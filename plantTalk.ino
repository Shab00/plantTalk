#define LED_PIN 13
#define MOISTURE_PIN A0  
int moistureThreshold = 300;
                            
void setup() {
  Serial.begin(9600); 
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int moisture = analogRead(MOISTURE_PIN);
  if (moisture <= moistureThreshold) {
    Serial.println("Feed Me! " + String(moisture));
    // Flash the LED 3 times
    for (int i = 0; i < 3; i++) {
      digitalWrite(LED_PIN, HIGH);
      delay(200);
      digitalWrite(LED_PIN, LOW);
      delay(200); 
    }
  } else {
    digitalWrite(LED_PIN, LOW);
    delay(1000);
  }
}
