#include <iostream>

using namespace std;
class MyClass{
	int z;// private attribute
	public:
		int x;
	private:
		int y;	
};
int main() {
	MyClass myObj;
	myObj.x = 15;
	myObj.z = 15;	// 私有成员不能被外部访问
	myObj.y = 20; 	// 私有成员不能被外部访问
	return 0;
}