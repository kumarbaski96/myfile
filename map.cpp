#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main()
{
	map<int,string> m1;

	m1.insert(pair<int,string>(1,"Ajay"));
	m1.insert(pair<int,string>(2,"Binod"));
	m1.insert(pair<int,string>(3,"Manoj"));
	m1.insert(pair<int,string>(4,"Mohan"));
	m1.insert(pair<int,string>(5,"Shyam"));
	m1.insert(pair<int,string>(6,"Sunil"));
	m1.insert(pair<int,string>(7,"Anay"));

	//printing the valu of map m1
	map<int,string>::iterator itr;
	cout<<"\n The map m1 values: \n";
	cout<<"\tKey\tElements\n";
	for(itr=m1.begin();itr!=m1.end();++itr)
	{
		cout<<"\t"<<itr->first<<"\t"<<itr->second<<"\n";
	}
	cout<<endl;

	//assigning the elements from m1 to m2
	map<int,string>m2(m1.begin(),m1.end());

	//printing the value of m2
	cout<<"\n The map m2 values: \n";
	cout<<"\tKey\tElements\n";
	for(itr=m2.begin();itr!=m2.end();++itr)
	{
		cout<<"\t"<<itr->first<<"\t"<<itr->second<<"\n";
	}
	cout<<endl;

	//remove all elements up to elements with key=3 in m1
	cout<<"\n m1 after removal of elements less than key =3:\n";
	cout<<"\tKey\tElements\n";
	m1.erase(m1.begin(),m1.find(3));
	for(itr=m1.begin();itr!=m1.end();++itr)
	{

		cout<<"\t"<<itr->first<<"\t"<<itr->second<<"\n";
	}

	//lower bound and upper bond for map m1
	cout<<"lower bound and upper bound for map m1\n";
	cout<<"Key\t\tElements\n";
	cout<"\tm1.lower_bound(5) : \tKEY = ";
	cout<<m1.lower_bound(5)->first<<"\t";
	cout<<"\tElements = "<<m1.lower_bound(5)->second<<endl;
	cout<"\tm1.upper_bound(5) : \tKEY = ";
	cout<<m1.upper_bound(5)->first<<"\t";
	cout<<"\tElements = "<<m1.upper_bound(5)->second<<endl;

	return 0;

}
