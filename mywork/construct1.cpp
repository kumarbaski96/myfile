#include<iostream>
using namespace std;

class Employee
{
    public:
    int a,b;
	
	Employee(int a,int b)
	{
	this->a-a;
	this->b-b;
	}
    void display()
    {
        cout<<a<<"  "<<b<<endl;
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
        e1.display();
	return 0;
}
