#include<iostream>
using namespace std;

int main()
{
//	int a=10;
//	int *ptr;
//	ptr=&a;
//
//	cout<<"Value of a= "<<a<<endl;
//	cout<<"Value of &a= "<<&a<<endl;
//	cout<<"Value of ptr= "<<ptr<<endl;
//	ptr++;
//	cout<<"value of ptr++ = "<<ptr<<endl;
//	cout<<"Value of *ptr= "<<*ptr<<endl;
//	*ptr=20;
//	cout<<"value of *ptr= "<<*ptr<<endl;
    int arr[]={10,20,30};
    int i;
    int *ptr=arr;
    
    for(i=0;i<3;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
	return 0;
}
