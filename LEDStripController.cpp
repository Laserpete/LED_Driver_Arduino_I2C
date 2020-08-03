// Do not remove the include below
#include "LEDStripcontroller.h"

#define intensity 255

int red, blue, green;
int red_pin = 5;
int blue_pin = 6;
int green_pin = 9;


void setup()
{
	pinMode(red_pin, OUTPUT);
	pinMode(blue_pin, OUTPUT);
	pinMode(green_pin, OUTPUT);
}

// The loop function is called in an endless loop
void loop()
{
	analogWrite(blue_pin, intensity);
				for(red = 0 ; red <= intensity ; red += 10){
					blue = red;
					analogWrite(red_pin, red);
					analogWrite(blue_pin, blue);
					delay(50);
				}
				for(red = intensity ; red >= 0 ; red -= 10){
					blue = red;
					analogWrite(red_pin, red);
					analogWrite(blue_pin, blue);
					delay(50);
				}
				for(green = 0 ; green <= intensity ; green += 10){
					blue = green;
					analogWrite(green_pin, green);
					analogWrite(blue_pin, blue);
					delay(50);
				}
				for(green = intensity ; green >= 0 ; green -= 10){
					blue = green;
					analogWrite(green_pin, green);
					analogWrite(blue_pin, blue);
					delay(50);
				}
				for(green = 0 ; green <= intensity ; green += 10){
					red = green;
					analogWrite(green_pin, green);
					analogWrite(red_pin, red);
					delay(50);
				}
				for(green = intensity ; green >= 0 ; green -= 10){
					red = green;
					analogWrite(green_pin, green);
					analogWrite(red_pin, red);
					delay(50);
				}


}









