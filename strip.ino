#include "FastLED.h"

#define NUM_LEDS  300
#define PIN       1

CRGB leds[NUM_LEDS];
int current = 0;
int delta = 2;

void setup() {
  FastLED.addLeds<WS2812B, PIN, GRB>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.clear();                                   
}

void loop() {
    pulseTrain();
}

void pulseTrain() {

}

void shift() {
    for(int ii = 0; ii < NUM_LEDS; ii++) {
        
        
    }
}

void pingPong() {
    while(current < NUM_LEDS) {
        displayLeds();
        current++;
    }

    while(current > 0) {
        current--;
        displayLeds();
    }
}

void displayPingPong() {
        leds[current].setRGB(90, 60, 180);
        if (current >= delta) { 
          leds[current - delta].setRGB(0, 0, 0);
        }

        if (current + delta < NUM_LEDS) { 
          leds[current + delta].setRGB(0, 0, 0);
        }
   
        FastLED.show();
}
