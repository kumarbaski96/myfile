#include<iostream>
#include<list>
using namespace std;
int main()
{
        list<string> lang={"C","C#","Java","Python"};
        list<string>::iterator itr;
	lang.push_back("PHP");
	lang.push_back("HTML");
	for(itr=lang.begin();itr!=lang.end();++itr){
		cout<<*itr<<endl;
	}
	cout<<endl;
        return 0;
}



