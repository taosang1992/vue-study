#include <iostream>

using namespace std;

class MyClass {
	public:
		int myNum;
		string myString;
};

class Car {
	public:
		string brand;
		string model;
		int year;
};
int main() {
	MyClass myObj;
	myObj.myNum = 15;
	myObj.myString = "Some text";
	
	cout << myObj.myNum << "\n";
	cout << myObj.myString << "\n";
	
	Car car1;
	Car car2;
	
	car1.brand = "BWM";
	car1.model = "X5";
	car1.year = 1999;
	
	car2.brand = "Ford";
	car2.model = "Mustang";
	car2.year = 1969;
	
	cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
	cout << car2.brand << " " << car2.model << " " << car2.year << "\n";
	return 0;	
}

