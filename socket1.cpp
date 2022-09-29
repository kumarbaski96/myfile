#include<iostream>
// M
// #include<winsock.h>
using namespace std;


#include <netdb.h>
#include <netinet/in.h>

int main(){
	// Initialize the WSA variable
	WSADATA ws;
	if (WSAStartup(MAKEWORRD(2,2),&WS)<0)
	{
		cout<<"WSA Failed to intialize";
	}
	else
	{
		cout<endl<<<"WSA initialized";
	}
	//Initialize the socket
	int nSocket =  socket(AF_INET, SOCK_STREAM,IPPROTO_TCP);
	if(oSocket < 0)
	{
		cout<<"\n The socket is not opend ";
	}
	else
	{
		cout<<"The socket opened Successfully!!";
	}
	//Initialize the environment for sockaddr structure
	//Bind the socket to the local port
	//Listen the request from client(queues the request)
	//Keep waiting for new request for new request and proceed as per the request
}
