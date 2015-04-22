#include "computer.h"
int Computer::counter = 0; // initialize static member data
Computer::Computer(string n, string u, Display d, Keyboard k, Mouse m):displayObject(d),keyboardObject(k),mouseObject(m),name(n),user(u){
	counter++;
	cout << "* * * * Object Number: " << counter << " * * * *"<<endl; // Printing number of object each time  when constructor called
}

void Computer::setName(string n){
	name = n;
}
string Computer::getName(){
	return name;
}
void Computer::setUser(string u){
	user = u;
}

string Computer::getUser(){
	return user;
}
Display Computer::getDisplay(){
	return displayObject;
}
Keyboard Computer::getKeyboard(){
	return keyboardObject;
}
Mouse Computer::getMouse(){
	return mouseObject;
}
void Computer::printInfo(){
	cout << "- - - Computer Info- - -" << endl;
	cout << "Name: " << getName() << endl;
	cout << "User: " << getUser() << endl;
	cout << "- - - - - - - " << endl;
	getDisplay().printInfo();
	cout << endl;
	getKeyboard().printInfo();
	cout << endl;
	getMouse().printInfo();
	cout << endl;

	cout << "Amount of computers: " << counter;
	cout << endl;
	cout << "- - -  Computer Info - - - " << endl;
}

