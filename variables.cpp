#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	const int myIntNum = 15;	// myNum will always be 15;
	double myFloatNum = 19.99;
	char myLetter = 'A';
	string myText = "Hello code";
	bool myBoolean = true;
//	myNum = 20; error :assignment  of read-only variable 'myNum;
	cout << myIntNum;
	cout << "\n";
	cout << myFloatNum;
	cout << "\n";
	cout << myLetter;
	cout << "\n";
	cout << myText;
	cout << "\n";
	cout << myBoolean;
	
	int myAge = 27;
	cout << "I am " << myAge << " years old.";
	cout << "\n";
	
	int x = 5;
	int y = 7;
	int sum = x + y;
	cout << "x + y = " << sum;
	cout << "\n";
	
	int a = 5, b = 10, c = 15;
	cout << "a + b + c = " << a + b + c;
}