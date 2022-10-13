#include<iostream>
using namespace std;
int main()
{
    string str ;
    str = "lol" ;
    cout << str << "\n" ;

    // modify string
    str = "bigger_lol" ;
    cout << str << "\n" ;

    // we can use string same as that of array 
    cout << str[0] << " " << str[1] << "\n" ; 
    str[0] = 'B' ; // access using index of char 
    cout << str << endl ;

    string s1, s2, s3 ;
    s1 = "aadish" ;
    s2 = "Jain";
    s3 = s1 + s2 ; // concatenation
    s1 += s2 ; // valid 
    cout << s1 << endl ;
    cout << s3 << endl ;

    // size [1]
    cout<< s2.size() << "\t";

    // size [2]
    cout << s2.length() << endl ;
    return 0;
}