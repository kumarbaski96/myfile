#include<iostream>
using namespace std;
int main(){
    int marks[]={10,20,30,40,50};
    int *point[5];
    int i;
   
    for(i=0;i<5;i++)
    {
        cout<<"marks["<<i<<"]="<<marks[i]<<endl;
        point[i]=&marks[i];
    }
    cout<<endl;
    for(i=0;i<5;i++)
    {
        cout<<"marks["<<i<<"]="<<*point[i]<<endl;
        
    }
    
    for(i=0;i<5;i++)
    {
        cout<<"marks["<<i<<"] Address = "<<&point[i]<<" = value - "<<*point[i]<<endl;
        
    }
    
    return 0;

}
