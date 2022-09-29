#include<iostream>
using namespace std;
int main(){
    char name[15];
    cout<<"Enter name:-"<<endl;
    cin.getline(name,11);
    cout.write(name,11);
    //cout<<name<<endl;
    return 0;
    
}
