#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define LEDS_PIN 6
#define POT_PIN A0
#define STRIPLEDCOUNT 30
Adafruit_NeoPixel strip = Adafruit_NeoPixel(STRIPLEDCOUNT, LEDS_PIN, NEO_GRB + NEO_KHZ800);

int potValue = 0;
int lednumber = 0;
int i, n;

void setup() {
  strip.begin();
  strip.setBrightness(50);
  strip.show(); 
  Serial.begin(9600);
}

void loop() {
  potValue = analogRead(POT_PIN);
  lednumber = map(lednumber, 0, 1023, 0, STRIPLEDCOUNT);

  Serial.print("potValue = ");
  Serial.print(potValue);
  Serial.print("\t lednumber = ");
  Serial.println(lednumber);
  
for(i=1; i<=lednumber; i++){
    strip.setPixelColor(i,strip.Color(255, 0, 0));
  }
  strip.show();
  delay(50);
}
