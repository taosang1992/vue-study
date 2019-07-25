#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	string food = "Pizza";
	string* ptr = &food;
	cout << food << "\n";	// Pizza
	cout << &food << "\n"; // pointer is a variable type that store address of the variable
	cout << ptr << "\n";	// 0x7ffee6a485c8
	cout << *ptr << "\n"; 	// 0x7ffee6a485c8
	// ptr == &food // Pizza
	
	*ptr = "Hamburger";
	cout << food << "\n";	// Pizza
	cout << &food << "\n"; //  0x7ffee2a785c8
	cout << ptr << "\n"; // 	0x7ffee2a785c8
	cout << *ptr << "\n"; //  Hamburger
}