#include<iostream>
using namespace std;
int main()
{
    const int i = 10 ;
    int const k = 3 ; // 
    // it can't be changed later
    // must be initialied in declaration itself
    int j = 12 ;
    const int &k = j ; // const ref. of non const var
    // this makes path of k constant not the storage
    // k++ ; is illegal 
    j++ ; // works fine
    cout << k ; // read only for k 
    
    int const a = 34 ;
    const int &b = a ; // const ref of const var
    // both a++ and b++ is illegal

    // reference from a const int  ! no !
    int const c = 53 ;
    // int &d = c ; // error here
    return 0;
}