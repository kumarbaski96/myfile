#include<iostream>
using namespace std;
 class Car
 {
 public:
    void shiftGear()
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
	SportsCar sc;
	sc.shiftGear();
	return 0;
}
