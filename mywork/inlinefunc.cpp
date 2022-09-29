#include<iostream>
//using namespace std;
inline int max(int x,int y){
    return((x>y)?x:y);
}
int main(){
    std::cout<<"Greater value is -"<<max(10,20)<<std::endl;
    return 0;
}
