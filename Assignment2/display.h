#include "libraries.h"

class Display{
private:
	string name;
public:
	Display(string n);
	void setName(string Name);
	string getName();
	void printInfo();

};