#include<iostream>
#include<fstream>

using namespace std;

int main() {
    FILE *fp;
	char arr[100];
        cout<<"Enter your text here!!"<<endl;
	cin.getline(arr, 100);
	fp=fopen("sanoj.txt","w");
        fputs(arr,fp);
	cout<<arr<<endl;
	fclose(fp);
	cout << "file write operation perform successfully" << endl << endl;
        cout<<"Reading from baski.txt operation started"<< endl;
         fp=fopen("sanoj.txt","r");
        fgets(arr,sizeof(arr),fp);
        cout<<"Array content: "<<arr<<endl;
        fclose(fp);
	return 0;
}
