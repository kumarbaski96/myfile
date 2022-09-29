#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char str[]="Hi i am learning about string strtok in c++";
    char *ptr;
    ptr=strtok(str," ");
    while(ptr!=NULL)
    {
        
        cout<<ptr<<endl;
        ptr=strtok(NULL," ");
        
}
  return 0;
}
