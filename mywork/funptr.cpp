#include <iostream>  
using namespace std;  
void printname(char *name){
    cout<<"Name is :-"<<name<<endl;
}
  
int main()  
{  
    char s[20];//array declaration
    void (*ptr)(char*);//function pointer declared
    ptr =printname;//storing the address of printname in ptr 
    cout<<"Enter the name of the person"<<endl;
    cin>>s;
    cout<<s<<endl;
    ptr(s);
    return 0;  
}  