#include<iostream>
using namespace std;
int main(){
	int data=50;
	int *ptr;
	ptr=&data;
	cout<<"Value in *ptr "<<*ptr<<endl;

	int **double_ptr;
	double_ptr=&ptr;
	cout<<"Value in **double_ptr "<<double_ptr<<end;
	return 0;

}
