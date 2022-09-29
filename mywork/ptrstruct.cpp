#include<iostream>

using namespace std;
struct Person{
    char name[50];
    int age;
    float salary;
     
};
int main()
{
    Person p;
    cout<<"Enter name:- ";
    cin.get(p.name,50);
    cout<<"Enter age:- ";
    cin>>p.age;
    cout<<"Enter salary :- ";
    cin>>p.salary;
     cout<<"Name :-"<<p.name<<endl;
    cout<<"age :-"<<p.age<<endl;
    cout<<"Salary :-"<<p.salary<<endl;
    return 0;
}


