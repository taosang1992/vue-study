#include <iostream>
#include <string>
using namespace std;
int main(){
	string cars[4] = {"Volvo","Ford","BWM","Mazda"};
	cars[0] = "Opel";
	cout << cars[0] + "\n";
	cout << cars[1] + "\n";
	cout << cars[2] + "\n";
	cout << cars[3] + "\n";
	
	for (int i = 0; i < 4; i++){
		cout << cars[i] << "\n";
	}
}
