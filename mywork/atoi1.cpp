#include<iostream>
#include <cstdio>
using namespace std;
int main(){
    char year[50];
    int a;
    cout<<"Enter a year : ";
    gets(year);
    a=atoi(year);
    a=a+10;
    cout<<"sum= "<<a;
    return 0;
}
