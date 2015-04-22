// Nuruddin Iminokhunov 
// 22.04.2015

#include "computer.h"

int main(){
	Display dObj1("Samsung");
	Keyboard kObj1("Samsung", 10000008);
	Mouse mObj1("Defender Creative Super Mouse");

	Computer cObj1("Samsung UltraBook Series 5", "IUTLab", dObj1, kObj1, mObj1);


	cout << endl;
	cObj1.printInfo();

	cout << endl;

	Display dObj("LG");
	Keyboard kObj("A4Tech", 108);
	Mouse mObj("A4Tech");

	Computer cObj("Hunt Key", "IUT", dObj, kObj, mObj);

	
	cout << endl;
	cObj.printInfo();
	
	cout << endl;

	
	return 0;
}