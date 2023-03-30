//============================================================================
// Name        : lab5.cpp
// Author      : Krishna Ramlall
// Version     :
// Copyright   : 
// Description : LAB 5 FOR EMT 2410! (CREATE YOUR OWN CLASS FOR A HARDWARE:)
//============================================================================

#include <iostream>
using namespace std;

class LED{
private:
	    int PinNum;
	    int TimeDuration;
	    float Brightness;
public:
	    LED(int);
	    void TurnOn(int);
	    void TurnOn(int, float);
	    void TurnOn(int, float, int);
	    void TurnOff(int);
};
LED::LED(int pinNum){
	PinNum = pinNum;
	TimeDuration = 1;  //To make it on all the time
	Brightness = 1;  //Full Brightness
}
void LED::TurnOn(int pinNum){
	PinNum = pinNum;
	TimeDuration = 1;
	Brightness = 1;
	cout<< "Please turn on the LED that is connected to the pin: "<<PinNum<<endl;
	cout<< "In the brightness of: "<<Brightness<<endl
	<< "At all times"<<endl;
}
void LED::TurnOn(int pinNum, float brightness){
	PinNum = pinNum;
	TimeDuration = 1;
	Brightness = brightness;
	cout<<"Please turn on the LED that is connected to the pin: "<<PinNum<<endl;
	cout<<"In the brightness of: "<<Brightness<<endl;
	cout<<"At all times"<<endl;
}
void LED::TurnOn(int pinNum, float brightness, int timeDuration){
	pinNum = PinNum;
	TimeDuration = timeDuration;
	Brightness = brightness;
	cout<< "Please turn on the LED that is connected to the pin: "<<PinNum<<endl;
	cout<< "In the brightness of: "<<Brightness<<endl
	<<"For the desired time duration: "<<timeDuration<<endl;
}
void LED::TurnOff(int pinNum){
	PinNum = pinNum;
	TimeDuration = 0;
	Brightness = 0;
	cout<< "Please turn off the LED that is connected to the pin: "<<PinNum<<endl;
}

int main() {
	LED *GreenLED = new LED(1);  //This creates a pointer object
	GreenLED->TurnOn(3);  //This calls on the function
	delete(GreenLED);  //This deallocates the memory

	return 0;
}
