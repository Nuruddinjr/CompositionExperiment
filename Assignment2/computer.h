#include "display.h"
#include "keyboard.h"
#include "mouse.h"

class Computer{
private:
	string name;
	string user;
	Display displayObject;
	Keyboard keyboardObject;
	Mouse mouseObject;
	static int counter; // declarte static member
public:
	Computer(string n, string u, Display d, Keyboard k, Mouse m);
	void setName(string n);
	string getName();
	void setUser(string u);
	string getUser();
	Display getDisplay();
	Keyboard getKeyboard(); 
	Mouse getMouse();
	void printInfo();




};