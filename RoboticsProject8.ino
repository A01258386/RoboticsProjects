#define led 3
//voice sensor

void setup() {

    pinMode(led,OUTPUT);
    Serial.begin(9600);

}

void loop() {

  int light = analogRead(A0);
  Serial.println(light);
  delay(50);

  if(light > 155){
    digitalWrite(led,LOW);
  }

  if(light < 150){
    delay(150);
    digitalWrite(led,HIGH);
  }

}
