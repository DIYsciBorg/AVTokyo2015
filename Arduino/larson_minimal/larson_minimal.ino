const int buttonPin = 2;
const int ledPin1 = 13;
int buttonState = 0;

int leds[] = {6, 7, 8, 9, 10, 11, 12, 13};
#define NUMBER_OF_LEDS (sizeof(leds)/sizeof(int))

boolean larson[][NUMBER_OF_LEDS] = {
{ HIGH, LOW, LOW, LOW, LOW, LOW, LOW, LOW},
{ LOW, HIGH, LOW, LOW, LOW, LOW, LOW, LOW},
{ LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW},
{ LOW, LOW, LOW, HIGH, LOW, LOW, LOW, LOW},
{ LOW, LOW, LOW, LOW, HIGH, LOW, LOW, LOW},
{ LOW, LOW, LOW, LOW, LOW, HIGH, LOW, LOW},
{ LOW, LOW, LOW, LOW, LOW, LOW, HIGH, LOW},
{ LOW, LOW, LOW, LOW, LOW, LOW, LOW, HIGH},
{ LOW, LOW, LOW, LOW, LOW, LOW, HIGH, LOW},
{ LOW, LOW, LOW, LOW, LOW, HIGH, LOW, LOW},
{ LOW, LOW, LOW, LOW, HIGH, LOW, LOW, LOW},
{ LOW, LOW, LOW, HIGH, LOW, LOW, LOW, LOW},
{ LOW, LOW, HIGH, LOW, LOW, LOW, LOW, LOW},
{ LOW, HIGH, LOW, LOW, LOW, LOW, LOW, LOW},
};

#define FRAMES (sizeof(larson)/(sizeof(larson[0])))


int sensorPin = 500;
int sensorValue = 0;

void setup() {
pinMode(ledPin1, OUTPUT);
for (int led=0; led<NUMBER_OF_LEDS; led++) {
pinMode(leds[led], OUTPUT);
}
}

void loop(){

long time = millis();
for (int frame=0; frame<FRAMES; frame++) {
  for (int led=0; led<NUMBER_OF_LEDS; led++) {
    digitalWrite(leds[led], larson[frame][led]);
    }
    delay(80);
  }
}
