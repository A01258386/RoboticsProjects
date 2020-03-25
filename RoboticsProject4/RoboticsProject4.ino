
//Sensetive Light with Potentiometer
#define Led 3
#define Pot A0

void setup() {
}

void loop() {
int value=analogRead(Pot);
value=map(value,0,1023,0,255);
analogWrite(Led,value);
}
