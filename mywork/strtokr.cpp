#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char str[] = "Hi I am Baski and i am Learning Tutorial and example";
    char* token;
    char* rest = str;
    while ((token = strtok_r(rest, " ", &rest)))
        cout<<token<<endl;
    return (0);
}