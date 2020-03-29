//bluetooth control
#include <IRremote.h>

int RECV_PIN = 2;
int redlight=9;
int greenlight=10;
int bluelight=11;
IRrecv irrecv(RECV_PIN);
decode_results results;

#define CH1 0xFFA25D
#define CH 0xFF629D
#define CH2 0xFFE21D
#define PREV 0xFF22DD
#define NEXT 0xFF02FD
#define PLAYPAUSE 0xFFC23D
#define VOL1 0xFFE01F
#define VOL2 0xFFA857
#define EQ 0xFF906F
#define BUTON0 0xFF6897
#define BUTON100 0xFF9867
#define BUTON200 0xFFB04F
#define BUTON1 0xFF30CF
#define BUTON2 0xFF18E7
#define BUTON3 0xFF7A85
#define BUTON4 0xFF10EF
#define BUTON5 0xFF38C7
#define BUTON6 0xFF5AA5
#define BUTON7 0xFF42BD
#define BUTON8 0xFF4AB5
#define BUTON9 0xFF52AD

void setup() {
  pinMode(redlight, OUTPUT);
  pinMode(greenlight, OUTPUT);
  pinMode(bluelight, OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop() {
   if (irrecv.decode(&results))
  {
    if (results.value == BUTON1)
    {
      digitalWrite(redlight, !digitalRead(redlight));
      if (digitalRead(redlight) == HIGH)
      {
        Serial.println("Red light on");
      }
      else
      {
        Serial.println("Red light off");
      }
    }
    if (results.value == BUTON2)
    {
      digitalWrite(greenlight, !digitalRead(greenlight));
      if (digitalRead(greenlight) == HIGH)
      {
        Serial.println("Red light on");
      }
      else
      {
        Serial.println("Red light off");
      }
    }
    if (results.value == BUTON3)
    {
      digitalWrite(bluelight, !digitalRead(bluelight));
      if (digitalRead(bluelight) == HIGH)
      {
        Serial.println("Blue light on");
      }
      else
      {
        Serial.println("Blue light off");
      }
    }
   
    if (results.value == BUTON4)
    {
      digitalWrite(redlight, HIGH);
      digitalWrite(greenlight, HIGH);
      digitalWrite(bluelight, HIGH);
      Serial.println("Tum LED'ler YANDI");
    }
    if (results.value == BUTON0)
    {
      digitalWrite(redlight, LOW);
      digitalWrite(greenlight, LOW);
      digitalWrite(bluelight, LOW);
      Serial.println("Tum LED'ler sondu");
    }
    irrecv.resume();
  }

}
