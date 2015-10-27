

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
};

#define FRAMES (sizeof(larson)/(sizeof(larson[0])))




void setup() {

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

delay(10);
}
delay(1000);
}

