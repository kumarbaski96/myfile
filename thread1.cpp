#include <iostream>
#include <thread>
#include <cstdlib>
using namespace std;

void sum(int a,int b){
     int c;
     c=a+b;
     cout<<"sum = "<<c<<endl;
}
void sub(int p,int q){
	int r;
	r=p+q;
	cout<<"sub = "<<r<<endl;
}

 int main(){
     thread t1(sum,10,20);
     thread t2(sub,20,10);
     t1.join();
     t2.join();
	//sum(10,20);
	//sub(30,40);
	return 0;
}
