#include <FastLED.h>

#define LED_TYPE WS2812
#define NUM_LEDS 9
#define DATA_PIN 12

CRGB leds[NUM_LEDS];

void setup() {
  pinMode(DATA_PIN, OUTPUT);
  FastLED.addLeds<LED_TYPE, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
  leds[0] = CRGB(165, 164, 255);
  leds[1] = CRGB(188, 141, 255);
  leds[2] = CRGB(178, 151, 255);
  leds[3] = CRGB(152, 177, 255);
  leds[4] = CRGB(177, 152, 255);
  leds[5] = CRGB(166, 163, 255);
  leds[6] = CRGB(132, 197, 255);
  leds[7] = CRGB(164, 165, 255);
  leds[8] = CRGB(151, 178, 255);
  FastLED.show();
  delay(1000);
  FastLED.remove();

}
