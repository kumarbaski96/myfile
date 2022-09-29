#include<iostream>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<cstring>
using namespace std;
int main()
{
    //return 0;
    //create a socket
    int listening_socket,client_socket;
    listening_socket = socket(AF_INET,SOCK_STREAM,0);
    if (listening_socket == -1)
    {
        cerr<<"Can't Create socket";
        return 0;
    }
    cout << "socket create " <<endl;
    //bind with socket with ip address and port
    sockaddr_in server, client;
    server.sin_family = AF_INET;
    server.sin_port = htons(54000);
    server.sin_addr.s_addr = INADDR_ANY;
    memset(server.sin_zero,8,0);

    unsigned len = sizeof(sockaddr_in);

    if((bind(listening_socket, (sockaddr*)&server, len)) == -1)
    {
        cerr<<"Can't bind";
        return 0;
    }
    //start listning
    if(listen(listening_socket,5) == -1)
    {
        cerr<<"Cant listen";
        return 0;
    }
    //wait for connection
    if((client_socket= accept(listening_socket,(sockaddr*)&client,&len)) == -1)
    {
        cerr<<"Can't accept";
        return 0;
    }
    cout << " CONNECTED" << endl;
    //close the listening socket
    close(listening_socket);
    //while loop:send/recv messages
    char buf[4096];
    string msg;
    while(1)
    {
        //wait for the client  to send the message;
        memset(buf,4096,0);
        int bytesReceived = recv(client_socket, buf, 4096, 0);
        if(bytesReceived> 0)
        {
            //printed back the message to the client ,
            int sent =send(client_socket,buf,bytesReceived+1,0);
            cout<<"Sent "<<sent<<"bytes to client "<<inet_ntoa(client.sin_addr)<<endl;

        }
    }
    //close socket
    close(client_socket);
    return 0;
}
