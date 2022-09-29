#include<iostream>
#include<fstream>
using namespace std;

int main() {
	char arr[100];
        cout<<"Enter your text here!!"<<endl;
	cin.getline(arr, 100);
	ofstream myfile("baski.txt");
	//myfile.open("baski.txt");
	myfile<<arr;
	myfile.close();
	cout << "file write operation perform successfully" << endl << endl;
        cout<<"Reading from baski.txt operation started"<< endl;
        ifstream obj("baski.txt");
        obj.getline(arr,100);
        cout<<"Array content: "<<arr<<endl;
        obj.close();
	return 0;
}
