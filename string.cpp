#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
	string txt = "A dog is running after a cat";
	cout << "The length of the txt string is : " << txt.length() << "\n";
	cout << txt[0] << "\n";
	
	string myString = "Hello";
	myString[0] = 'h';
	cout << myString << "\n";
	
//	string firstName, lastName;
//	cout << "Type your first name: ";
//	cin >> firstName;
//	cout << "Type your second name: ";
//	cin >> lastName;
//	cout << "Your full name is " << " " << firstName << lastName;
	
//	string fullName;
//	cout << "Type your full name: ";
//	getline(cin,fullName);
//	cout << "Your name is " << fullName;
	
	string x = "10";
	string y = "24";
	cout << "x + y = " << (x + y);
}