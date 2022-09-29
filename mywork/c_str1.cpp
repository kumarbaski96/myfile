#include<iostream>
#include<bits/stdc++.h>
#include<string>
int sum();
int add();
using namespace std;
int main(){
    
	//cout<<"hello";
	string s1="baski";
	for(int i=0;i<=s1.length();i++){
		cout<<s1.c_str()[i]<<endl;
	}
        sum();
	return 0;
}
int sum(){
    cout<<"sum"<<endl;
    add();
    return 0;
}
int add(){
    cout<<"Thanks"<<endl;
    return 0;
}

