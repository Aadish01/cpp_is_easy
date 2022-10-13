#include<iostream>
using namespace std;
// although we use char[] as string 
// here we do something much powerful 
// using string keyword
int main()
{
    // static
    string a = "lol" ;
    cout << a << endl ;

    // dynamic 
    string *sp = new string ;
    *sp = "bhsdk" ; // note here
    cout << sp << " " << *sp ;

    // input in string [1]
    string pokemon ;
    cout << "Enter pokemon: " ;
    cin >> pokemon ; // takes input until space encountered
    cout << pokemon ;

    // input in strings [2]
    getline(cin, pokemon) ; // takes a line as input from cin
    cout<< pokemon ;
    return 0;
} 