#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    char src[] = "It's Monday and it's raining";
    char dest[40];

    /* count less than length of src */
    strncpy(dest,src,10);
    cout << dest << endl;

    /* count more than length of src */
    strncpy(dest,src,strlen(src)+10);
    cout << dest << endl;
    return 0;
}
//#include <cstring>
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    char dest[50] = "Learning C++ is fun";
//    char src[50] = " and easy";
//
//    strcat(dest, src);
//    
//    cout << dest<<endl ;
//
//    return 0;
//
//}
