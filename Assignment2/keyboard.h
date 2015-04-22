#include "libraries.h"

class Keyboard{
private:
	string name;
	int numOfKeys;
public:
	Keyboard(string n, int numK);
	void setName(string n);
	string getName();
	void setNumOfKeys(int numK);
	int getNumOfKeys();
	void printInfo();


};