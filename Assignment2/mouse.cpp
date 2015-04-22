#include "mouse.h"

Mouse::Mouse(string n){
	setName(n);
}
void Mouse::setName(string Name){
	name = Name;

}
string Mouse::getName(){
	return name;
}
void Mouse::printInfo(){
	cout << "- - -  Mouse Info - - - " << endl;
	cout << "Name: " << getName() << endl;
	cout << "- - - Mouse Info - - - " << endl;
}