int moisture_pin = A1;

void setup() {
  pinMode(moisture_pin,INPUT); 
}


void loop() {
    int moisture_analog = analogRead(moisture_pin);

    Particle.publish("moisture", String(moisture_analog), 60, PRIVATE);
    
    delay(10000);
}
