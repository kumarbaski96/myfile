#include<iostream>
using namespace std;

class Employee
{
	public:
	Employee(int a,int b)
	{
		cout<<"a= "<<a<<"b= "<<b<<endl;
	}
	~Employee()
	{
		cout<<"Distructor invoked"<<endl;

	}

};
int main(void)
{
	Employee e1=Employee(10,10);
	cout<<"size of constructor- "<<sizeof(e1)<<endl;
	return 0;
}
