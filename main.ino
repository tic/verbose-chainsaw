#define LIGHT_PIN A5
#define LED_PIN 5

void setup() {
  pinMode(LIGHT_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int light = analogRead(LIGHT_PIN);
  Serial.println(light);
  if(light < 512) analogWrite(LED_PIN, 1024 - (light * 2));
  else analogWrite(LED_PIN, 0);
  delay(128);
}
