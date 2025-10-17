//citeste un numar intre 8 si 13 de la calculator si fa blink la ledul corespunzator
void setup() {
  Serial.begin(9600);
  for(int i=8;i<=13;i++)
    pinMode(i, OUTPUT);
}

char c=' ';
int x=0, nr, oldNr;

//citeste numarul primit de la tastatura
void readNumber() {
  while(Serial.available()>0) {
    if(c==' ') x=0;
    c=Serial.read();
    if(c=='\n') break;
    x*=10;
    x+=c-'0';
  }
  if(c=='\n') {
    c=' ';
    nr=x;
  }
}

int pinVal = 0;
//face ledul pin sa faca blink la fiecare ms milisecunde
void blinkLed(int pin, int ms) {
  int aux = (millis()/ms)%2;
  if(pinVal!=aux) {
    digitalWrite(pin, aux);
    pinVal=aux;
  }
}

void blink() {
  readNumber();
  blinkLed(x,500);
}

void loop() {
  blink();
}
