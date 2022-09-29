// string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string name;

    name = "Pupesh";

    name += ' ';
    name += "Dev";

    std::cout << name << std::endl;

    std::string name2, name3;
    name3 = "will";

    name2 = name3 + "Smith";

    std::cout << name2 << std::endl;
    

    std::string i_int;
    i_int = "12345";
    
    std::cout <<"size is " << i_int.size();


    int i =atoi(i_int);

    std::cout << i;

    std::string::iterator it;
    //std::string::ite
    //name.
    for (it = name.begin(); it != name.end(); it++)
        std::cout << *it;

    std::cout << std::endl;

    std::string::reverse_iterator rit;

    for (rit = name.rbegin(); rit != name.rend(); rit++)
        std::cout << *rit;

    std::cin.get();

   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
