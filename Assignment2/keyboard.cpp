#include "keyboard.h"

Keyboard::Keyboard(string n, int numK){
	setName(n);
	setNumOfKeys(numK);
}
void Keyboard::setName(string n){
	name = n;
}
string Keyboard::getName(){
	return name;
}

void Keyboard::setNumOfKeys(int numK){
	numOfKeys = numK;
}
int Keyboard::getNumOfKeys(){
	return numOfKeys;
}
void Keyboard::printInfo(){
	cout << "- - - Keyboard info- - - " << endl;
	cout << "Name:" << getName() << endl;
	cout << "Number of Keys " << getNumOfKeys()<<endl;
	cout << "- - - Keyboard info- - - " << endl;
}