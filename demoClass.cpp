#include<iostream>

using namespace std;
class Student
{
public:
    int roll;
    string name;
    string sec;

void setdata(int r, string n, string s)
{
    roll=r;
    name=n;
    sec=s;
}
void display()
{
    cout<<"Roll : "<<roll<<" ,name : "<<name<<" ,sec : "<<sec ;
}


};

int main()
{
    Student s1;
    s1.setdata(1,"baski","A");
    s1.display();
    return 0;
}
