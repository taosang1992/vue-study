#include <iostream>

using namespace std;
class Employee{
	private:
		int salary;
	
	public:
		void setSalary(int x)		{
			salary = x;
		}
		
		int getSalary(){
			return salary;
		}
};
int main() {
	Employee myObj;
	myObj.setSalary(50000);
	cout << myObj.getSalary();
	return 0;	
}