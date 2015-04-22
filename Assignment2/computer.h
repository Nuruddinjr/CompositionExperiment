#include "display.h"
#include "keyboard.h"
#include "mouse.h"

class Computer{
private:
	string name;
	Display displayObject;
	Keyboard keyboardObject;
	Mouse mouseObject;
public:
	Computer(string n, string u, Display d, Keyboard k, Mouse m);
	void setName(string n);
	string getName();
	Display getDisplay();
	Keyboard getKeyboard(); 
	Mouse getMouse();
	void printInfo();




};