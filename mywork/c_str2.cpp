#include<iostream>  
#include<cstring>  
#include<string>  
using namespace std;  
int main()  
{  
 string str="Computer is my favorite subject";  
 char* ch=new char[str.length()+1];  
 strcpy(ch,str.c_str());  
 cout<<"String value is :"<<ch;  
return 0;  
}  