#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int myNum;
	cout << "Type a number: ";
	cin >> myNum;
	cout << "Your number is: " << myNum << "\n";
	
	int x, y;
	int sum;
	cout << "Type a number: ";
	cin >> x;
	cout << "Type another number: ";
	cin >> y;
	sum = x + y;
	cout << "sum is: " << sum;
}