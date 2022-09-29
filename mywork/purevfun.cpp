#include<iostream>
using namespace std;

class Person
{
	public:
	virtual void func()=0;//do nothing function
	void f1()
	{

	}
};
class Student:public Person
{
public:
    void func()
    {
        cout<<"Inside child class  "<<endl;
    }
};
int main()
{
    Student s;
    s.func();
}
