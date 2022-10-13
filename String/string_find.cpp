#include<iostream>
using namespace std;
int main()
{
    string str = "Palermo" ;
    cout << str.find('l') << endl ; // return index 

    cout << str.find("rm") << endl ;
    cout << "\t working!" << endl ;
    return 0;
}