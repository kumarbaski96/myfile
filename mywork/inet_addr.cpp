#include<iostream>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<cstring>
#include<string.h>
//extra header file
#include<netinet/ip.h>
#include<stdio.h>
using namespace std;
int main()
{
    const char *server="127.0.0.1";
    
    int addr=inet_addr(server);
    cout<<server<<endl;
    
    return 0;
}