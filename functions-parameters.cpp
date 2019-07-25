#include <iostream>
using namespace std;
void myFunction(string fname, int age){
	cout << fname << " Jobs is " << age << " years old .\n";
}

int add(int x,int y){
	return x + y;
}
int main() {
	myFunction("Lisa", 41);
	myFunction("Reed", 28);
	myFunction("Eva", 21);
	int z = add(5,3);
	cout << z;
	return 0;
}