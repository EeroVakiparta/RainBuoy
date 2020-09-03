#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6
#define STRIPLEDCOUNT 30
Adafruit_NeoPixel strip = Adafruit_NeoPixel(STRIPLEDCOUNT, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.setBrightness(50);
  strip.show(); 
}

void loop() {
 int i, n;
  for(i=1; i<=STRIPLEDCOUNT; i++)
    {
        if(i%2!=0)
        {
            strip.setPixelColor(i,strip.Color(255, 0, 0));
        }
    }
    strip.show();
}
