#include<iostream>
#include<math.h>
using namespace std;

class ClassArray{
public:
    int roll;
    string name;
    int marks[5];
public:
   void setValue();
   void getValue();
};
void ClassArray::setValue(){
    cout<<"Please enter a roll no. - ";
    cin>>roll;
    cout<<"Please enter name - ";
    cin>>name;
     for(int j=0;j<5;j++){
        cout<<"Please enter Marks in subject-"<<j+1<<" :-";
        cin>>marks[j];  
     }
}
void ClassArray::getValue(){
    int total=0;
    float per=0;
    for(int i=0;i<5;i++){
        total=total+marks[i];
    }
    per=(total*100)/500;
    cout<<"Hello Mr.-  : "<<name<<endl;
    cout<<"Your roll no is : "<<roll<<endl;
    cout<<"You got -  "<<total<<" marks "<<endl;
    cout<<"Your got -  "<<per<<" % marks "<<endl;
}
int main(){
     int n=0;
    cout<<"How many object you want to create:- ";
    cin>>n;
    cout<<endl;
    ClassArray ao[n];
   
    for(int i=0;i<n;i++){
        cout<<"Please enter enter the details of student :- "<<i+1<<endl;
        ao[i].setValue();  
    }
     for(int i=0;i<5;i++){
        ao[i].getValue();  
        cout<<endl;
    }
    return 0;
}
