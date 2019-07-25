#include <iostream>

using namespace std;

int add(int x,int y){
	return x + y;
};
double add(double x, double y){
	return x + y;
};

float add(float x, float y){
	return x + y;
}
int main() {
	int intResult = add(5,3);
	double doubleResult = add(5.3,3.8);
	float floatResult = add(5.30,3.80);
	
	cout << intResult << "\n";
	cout << floatResult << "\n";
	cout << doubleResult << "\n";
	return 0;
}