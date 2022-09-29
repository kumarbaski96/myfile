#include<iostream>
using namespace std;
class Employee{
	public:
	float sal=39000;
};

class EmpDetails:public Employee{
	public:
	float bonus=2000;
};
int main(void){
	EmpDetails ed;
	cout<<"Salary: "<<ed.sal<<endl;
	cout<<"Bonus: "<<ed.bonus<<endl;
	return 0;

}
