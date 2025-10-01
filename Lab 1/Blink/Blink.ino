//fa ledurile de pe pozitiile 8-13 sa se aprinda si sa se inchida simultan
void setup() {
  for(int i=8;i<=13;i++)
    pinMode(i, OUTPUT);
}

void loop() {
  for(int i=8;i<=13;i++) {
  digitalWrite(i, HIGH);   
  }
  delay(250);
  for(int i=8;i<=13;i++) {
  digitalWrite(i, LOW);
  }                        
  delay(250); 
}
