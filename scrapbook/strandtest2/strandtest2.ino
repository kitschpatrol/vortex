#include <Adafruit_NeoPixel.h>

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel stripA = Adafruit_NeoPixel(45, 3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel stripB = Adafruit_NeoPixel(45, 5, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel stripC = Adafruit_NeoPixel(45, 6, NEO_GRB + NEO_KHZ800);


// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

void setup() {
  stripA.begin();
  stripA.show(); // Initialize all pixels to 'off'
  stripB.begin();
  stripB.show(); // Initialize all pixels to 'off'  stripA.begin();
  stripC.begin();
  stripC.show(); // Initialize all pixels to 'off'a
}

void loop() {
  // Some example procedures showing how to display to the pixels:
  for(uint16_t i=0; i<stripA.numPixels(); i++) {
      stripA.setPixelColor(i, stripA.Color(255, 255, 255));
      stripA.show();
      stripB.setPixelColor(i, stripB.Color(255, 255, 255));
      stripB.show();
      stripC.setPixelColor(i, stripC.Color(255, 255, 255));
      stripC.show();      
  }
}

