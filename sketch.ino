#include <Adafruit_NeoPixel.h>

const byte pir_pin= 15; 
const byte data_pin=22;
const byte buzzer_pin= // add the pin number to which buzzer is connected
const byte led_num = 20;

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(led_num, data_pin, NEO_GRB + NEO_KHZ800);

void setup() {

  Serial.begin(115200);
  pinMode(pir_pin, INPUT);

  // define pinMode for buzzer

  pixels.begin(); // initialize the library
  pixels.show();
}

void loop() {

  if(digitalRead(pir_pin)){
    
    //write code to make the buzzer go off


    //call the generate_pattern() function

  }
  delay(100); // this speeds up the simulation
}

void generate_pattern(){

    //write code to make the light flash


}