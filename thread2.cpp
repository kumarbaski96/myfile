#include <iostream>
#include <thread>
#include <cstdlib>
#include <unistd.h>

using namespace std;

void loop1(int a){
    for(int i=1;i<=a;i++){
        cout<<"i = "<<i<<endl;
         sleep(1);
    }
}    
void loop2(int b){
	 for(int j=1;j<=b;j++){
        cout<<"j = "<<j<<endl;
         sleep(1);
    }
}

 int main(){
     thread t1(loop1,20);
     sleep(1);
     thread t2(loop2,20);
     t1.join();
     t2.join();
    return 0;
}
