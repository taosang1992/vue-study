#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	cout << "C++ break\n";
	for (int i = 0; i < 10; i++){
		if(i==4){
			break;
		}
		
		cout << i << "\t";
	}
	
	cout << "\nC++ continue\n";
	for (int i = 0; i < 10; i++){
		if(i == 4){
			continue;
		}
		cout << i << "\t";
	}
	
//	cout << "\nC++ break with while loop\n";
//	int i = 0;
//	while(i < 10){
//		cout << i << "\t";
//		i++;
//		if(i == 4){
//			break;
//		}
//	}
	
	cout << "\nC++ break with while loop\n";
	int i = 0;
	while(i < 10){
		cout << i << "\t";
		i++;
		if(i == 4){
			continue;
		}
	}
	
}