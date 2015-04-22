#include "display.h"

Display::Display(string n){
	setName(n);
}
void Display::setName(string Name){
	name = Name;

}
string Display :: getName(){
	return name;
}
void Display::printInfo(){
	cout << "- - -  Display Info - - - " << endl;
	cout << "Name: "<< getName()<<endl;
	cout << "- - - Display Info - - - " << endl;
}