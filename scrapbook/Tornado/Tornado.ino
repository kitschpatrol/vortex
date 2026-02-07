#include "FastLED.h"

// How many leds in your strip?
#define STRIPS 4
#define STRIP_LENGTH 45
#define NUM_LEDS  = STRIPS*STRIP_LENGTH;



// Define the array of leds
CRGB leds[STRIPS * STRIP_LENGTH];


void setup() { 
        FastLED.addLeds<WS2812B, 43, RGB>(leds + (STRIP_LENGTH * 0), STRIP_LENGTH);
        FastLED.addLeds<WS2812B, 45, RGB>(leds + (STRIP_LENGTH * 1), STRIP_LENGTH);        
        FastLED.addLeds<WS2812B, 47, RGB>(leds + (STRIP_LENGTH * 2), STRIP_LENGTH);        
        FastLED.addLeds<WS2812B, 49, RGB>(leds + (STRIP_LENGTH * 3), STRIP_LENGTH);
      Serial.begin(9600);
}



void loop() { 
  // Turn the LED on, then pause



//   static uint8_t hue = 0;
  //FastLED.showColor(CHSV(sensorValue1 / 4, sensorValue2 / 4, sensorValue3 / 4)); 
  
    for (int i = 0; i < STRIPS*STRIP_LENGTH; i++) {      
    //for (int i = 0; i < NUM_LEDS; i++) {
          int sensorValue1 = analogRead(A15);  
    int sensorValue2 = analogRead(A14);  
    int sensorValue3 = analogRead(A13);      

      
        leds[i] = CHSV(sensorValue1 / 4, sensorValue2 / 4, sensorValue3 / 4);
        FastLED.show();    
        delay(10);
    }  
    
//        leds[i] = CRGB::Black;
  
    for (int i = 0; i < STRIPS*STRIP_LENGTH; i++) {      
        leds[i] = CRGB::Black;
        int sensorValue1 = analogRead(A15);          
        //delay(10);        
        FastLED.show();
    }  

    //FastLED.showColor(CRGB::Black); 

//    delay(sensorValue);
  


//    static uint8_t hue = 0;    
//  for (int i = 0; i < STRIPS; i++) {    
//
//  FastLED.showColor(CHSV(hue++, 255, 255)); 
//  delay(10);
//  }
  
  
    
//    for (int i = 0; i < STRIPS; i++) {
//      for (int j = 0; j < STRIP_LENGTH; j++) {
//        strips[i][j] = CRGB::White;
//        FastLED.show();    
//        delay(sensorValue / 50);    
//        strips[i][j] = CRGB::Black;
//        FastLED.show();
//      }
//    }
//    
//    for (int i = 0; i < STRIPS; i++) {
//      for (int j = 0; j < STRIP_LENGTH; j++) {
//        strips[i][j] = CRGB::Black;
//        FastLED.show();    
//        delay(sensorValue / 50);    
//        //strips[i][j] = CRGB::Black;
//        FastLED.show();        
//      }
//    }    
    
    
}
