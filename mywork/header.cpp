#include<iostream>
#include "header.h"
using namespace std;
int main(){
    emp e;
    cout<<"Enter your name age salary";
    cin>>e.name>>e.age>>e.sal;
    cout<<"Name : "<<e.name<<"Age : "<<e.age<<"Salary : "<<e.sal;
    return 0;
}
