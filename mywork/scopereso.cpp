#include<iostream>
#include<string>
#include<algorithm>
namespace apple{
    void print(const char* text){
        std::cout<<text<<std::endl;
    }
}
namespace orange{
    void print(const char* text){
        std::string temp=text;
        std::reverse(temp.begin(),temp.end());
        std::cout<<temp<<std::endl;
    }
}
int main(){
    apple::print("hello");
    std::cin.get();
}