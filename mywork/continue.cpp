#include<iostream>
using namespace std;
int main(){
    int count=0,i;
    for(i=1;i<=100;i++)
    {
        if(i%3==0)
        {  
            cout<<i<<" ";
           
            //continue;
        }
    }
    
    cout<<endl;
    return 0;
}
