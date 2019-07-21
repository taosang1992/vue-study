#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int x = 20, y = 18;
	if (x > y){
		cout << "Good day";
	}else{
		cout << "Good evening";
	}
	
//	int time = 22;
//	if(time < 10){
//		cout << "Good morning";
//	} else if(time < 20){
//		cout << "Good day";
//	} else {
//		cout << "Good evening";	
//	}
	
	int time = 20;
	string result = (time < 18) ? "good day!" : "Good evening";
	cout << result; // Good evening;
}