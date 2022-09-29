#include<iostream>
#include<vector>
using namespace std;
int main(){
	//creating a vector
	vector<int> vec;
	int i;
	//size of vector without elements
	cout<<"vector size= "<<vec.size()<<endl;

	//adding elements
	for(i=0;i<5;i++){
		vec.push_back(i);
	}

	//after adding value the vector size
	cout<<"size of vector after extends the new value"<<vec.size()<<endl;

	//diplaying the vector elements
	for(i=0;i<vec.size();++i){
		cout<<"value of vec ["<<i<<"]= "<<vec[i]<<endl;
	}

	//using iterator to accesing the value
	vector<int>::iterator v=vec.begin();
	while(v!=vec.end()){
		cout<<"Value of v= "<<*v<<endl;
		v++;
	}
	return 0;

}
