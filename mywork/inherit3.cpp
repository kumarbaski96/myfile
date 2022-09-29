#include<iostream>
using namespace std;
 class Car
 {
 public:
    virtual void shiftGear()
    {
       cout<<" changed from Car Class."<<endl;
    }
    
 };

 class SportsCar:public Car
 {
 public:
     void shiftGear()
    {
	cout<<" changed from sports Car Class"<<endl;
    }
     
     

 };
int main()
{
    Car *p,o1;
    SportsCar o2;
    p->shiftGear();
    return 0;
}
