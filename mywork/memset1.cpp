#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n;
    cout<<"input the size of array"<<endl;
    cin>>n;
    int a[n];
    memset(a,0 ,sizeof(a));
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= "<<a[i]<<endl;
    }
}
