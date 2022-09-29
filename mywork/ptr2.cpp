#include<iostream>
using namespace std;
int main(){
        int x=50;
        int *ptr1;
        int **ptr2;
        ptr1=&x;
        ptr2=&ptr1;
        cout<<"Value in x "<<x<<endl;
        cout<<"Value in ptr1 "<<ptr1<<endl;
        cout<<"Value in ptr1 "<<ptr2<<endl;
	cout<<"Value in *ptr1 "<<*ptr1<<endl;
	cout<<"Value in **ptr2 "<<**ptr2<<endl;
        cout<<"Value in *ptr2 "<<*ptr2<<endl;
        *ptr1=x+20;
        cout<<"Value in *ptr2 "<<x<<endl;
         cout<<"Value in *ptr2 "<<*(&x)<<endl;
        return 0;

}
