#define led 3

void setup() {

    pinMode(led,OUTPUT);
    Serial.begin(9600);

}

void loop() {

  int isik = analogRead(A0);
  Serial.println(isik);
  delay(50);

  if(isik > 155){
    digitalWrite(led,LOW);
  }

  if(isik < 150){
    delay(1500);
    digitalWrite(led,HIGH);
  }

}
