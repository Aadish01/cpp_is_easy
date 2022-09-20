#include<iostream>
using namespace std;
int main()
{
    char arr[] = "abc" ;
    cout << "original string: " << arr << endl ; 
    char * ptr = & arr[0] ;
    cout << "using pointer: " << ptr << endl ; // different behaviour
    ptr ++ ;
    cout << "incrementing pointer: " << ptr << endl ;
    char c = 'j' ;
    cout << "original charchter: " << c << endl ;
    char *ptr_char = &c ;
    cout << "using pointer: " << ptr_char << endl ; // print garbage value until it find null character
    return 0;
} 