#include <iostream>

using namespace std;
void myFunction();

int main(){
	myFunction();
	myFunction();
	myFunction();
	return 0;
}

void myFunction(){
	cout << "I'm customer function\n";
	cout << "I just got executed!\n";
}