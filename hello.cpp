#include<iostream>
using namespace std;
class Hello
{
	public:
		void hello(){
		cout<<"hello from c++";
                std::cout<<"Test"<<std::endl;
	}
};
int main(){
	Hello h;
	h.hello();
	return 0;
}
