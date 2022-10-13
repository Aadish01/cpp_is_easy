#include<iostream>
using namespace std;
// s.substr(1) returns substring of s starting from 1 index
int main()
{
    string str = "JasonMamoa" ;
    cout << str.substr(5) << endl ;

    // other variation of substr()
    cout<< str.substr(5,1) << endl ;
    return 0;
}