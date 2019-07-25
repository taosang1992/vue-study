#include <iostream>

using namespace std;

class MyClass{
	public:
		void myMethod();
//		void myMethod(){
//			cout << "Hello World";
//		}
};

void MyClass::myMethod(){
	cout << "Hello World\n";
}

class Car {
	public:
		int speed(int maxSpeed);	
};

int Car::speed(int maxSpeed){
	return maxSpeed;
}
int main() {
	MyClass myObj;
	myObj.myMethod();
	
	Car carObj;
	cout << carObj.speed(200);
	return 0;
}