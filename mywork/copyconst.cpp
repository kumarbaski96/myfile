#include<iostream>
using namespace std;
class Student{
    int roll;
    int marks;
public:
    Student(int m,int n)
    {
        roll=m;
        marks=n;
    }
    Student(Student &t);
    void show_Data(){
        cout<<"\n Roll No: "<<roll;
        cout<<"\nMarks   : "<<marks;
    }
};
Student::Student(Student& t){
    roll=t.roll;
    marks=t.marks;
}
int main(){
    Student r(20,39);
    cout<<"Parameterize constructor:-"<<endl;
    r.show_Data();
    r.show_Data();
    cout<<"\n copy construtor :-";
    Student stu(r);
    stu.show_Data();
    return 0;
}
