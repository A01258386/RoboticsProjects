//ULTRASONIC PARKING SENSOR

#define echoPin 6
#define trigPin 7
#define buzzerPin 8

int maximumRange=50;
int minimumRange=0;

void setup() {
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(buzzerPin,OUTPUT);
}

void loop() {
int value=interval(maximumRange,minimumRange);
tune(value*10);
}

int interval(int maxrange,int minrange)
{
  long duration,distance;

  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  duration=pulseIn(echoPin,HIGH);
  distance=duration/58.2;
  delay(50);

  if (distance>=maxrange || distance<=minrange)
  return 0;
  return distance;
}

int tune(int more)
{
  tone(buzzerPin,440);
  delay(more);
  noTone(buzzerPin);
  delay(more);
 }
