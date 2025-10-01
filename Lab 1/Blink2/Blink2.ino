//fa ledurile 8-13 sa dea cycle prin diverse animatii
void setup() {
  for(int i=8; i<=13; i++)
    pinMode(i, OUTPUT);
}

//face ca toate ledurile sa se aprinda odata la o secunda
void blink() {
  for(int i=8; i<=13; i++)
    digitalWrite(i, millis() / 1000 & 1);
}

//face o animate de "plimbare" a ledului
void walk() {
  for(int i=8; i<=13; i++) {
    digitalWrite(i, 1);
    digitalWrite(i-1,0);
    delay(100);
  }

  for(int i=13; i>=8; i--) {
    digitalWrite(i, 1);
    digitalWrite(i+1,0);
    delay(100);
  }
}

//inchide toate ledurile
void close() {
  for(int i=8; i<=13; i++)
    digitalWrite(i, 0);
}

void loop() {
  blink();
  close();
  walk();
  close();
}
