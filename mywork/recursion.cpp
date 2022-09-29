#include<iostream>
using namespace std;
int factorial(int n);
int main(){
	int a=5;
	cout<<"factorial of "<<a<<":- "<<factorial(a)<<endl;
	
        return 0;
}
int factorial(int n){
	if(n<=1){
		return(1);
	}
	else{
		return(n*factorial(n-1));
	}
}
