#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	for(int i = 0; i < 5; i++){
		cout << i << "\n"; // 0 1 2 3 4 5 
	}
	
	for(int i = 0; i <= 10; i+=2){
		cout << i << "\n"; // 0 2 4 6 8 10
	}
}