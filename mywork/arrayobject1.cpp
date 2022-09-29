#include<iostream>
using namespace std;
class ArrObj{
public:
    int num;
public:
    void setValue(){
        cout<<"Please enter a no. - ";
        cin>>num;
    }
    void getValue(){
        cout<<"Value of num is : "<<num<<endl;
    }
};
int main(){
    ArrObj ao[5];
    int n;
    cout<<"How many object you want to create:- ";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        ao[i].setValue();  
    }
     for(int i=0;i<5;i++){
        ao[i].getValue();  
    }
    return 0;
}
