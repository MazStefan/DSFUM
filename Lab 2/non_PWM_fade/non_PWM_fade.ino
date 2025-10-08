//efect fade pe ledul de pe placa
void setup() {
  pinMode(13, OUTPUT);

}

//simuleaza PWM pentru pin care nu are capabilitati PWM
void PWM(int pin, int c, int x) {
    int t = millis();
  while(millis()-t < c) {
    if(millis()-t < x) 
      digitalWrite(pin,1);
    else
      digitalWrite(pin,0);
  }
}

void loop() {
  PWM(13, 20, 0);
  delay(5);
  PWM(13, 20, 5);
  delay(5);
  PWM(13, 20, 10);
  delay(5);
  PWM(13, 20, 15);
  delay(5);
  PWM(13, 20, 20);
  delay(5);
  PWM(13, 20, 15);
  delay(5);
  PWM(13, 20, 10);
  delay(5);
  PWM(13, 20, 5);
  delay(5);
}
