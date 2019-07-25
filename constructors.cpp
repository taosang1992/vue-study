#include <iostream>

using namespace std;

class MyClass {
	public:
		MyClass(){
			cout << "Hello world!\n";
		}
};
class Car{
	public:
		string brand;
		string model;
		int year;
		
		Car(string x,string y, int z);
};
Car::Car(string x, string y, int z){
	brand = x;
	model = y;
	year = z;
}
int main() {
	MyClass myObj;
	Car car1("BMW","X5",1999);		
	Car car2("Ford","Mustang",1969);
		
	cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
	cout << car2.brand << " " << car2.model << " " << car2.year << "\n";
	return 0;		
}