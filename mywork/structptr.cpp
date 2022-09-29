#include<iostream>

using namespace std;

struct employee{
    char name[100];
    int age;
    float salary;
    char dept[50];
    
};
int main(){
    struct employee e,*ptr;
    cout<<"Please enter name:- ";
    cin>>e.name;
    cout<<"Please enter age:- ";
    cin>>e.age;
    cout<<"Please enter salary:- ";
    cin>>e.salary;
    cout<<"Please enter department:- ";
    cin>>e.dept;
    ptr=&e;
    cout<<"\nEmployee Details \n";
    cout<<"Name : "<<ptr->name<<"\nAge : "<<ptr->age<<"\nSalary : "<<ptr->salary<<"\nDept : "<<ptr->dept<<endl;
    return 0;
}
