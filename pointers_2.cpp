#include<iostream>
using namespace std;
int main()
{
    int num = 10;
    int *ptr = &num ;
    cout << "address of num: " << ptr << endl ;
    ptr ++ ;
    cout << "1st adjacent address: " << ptr << endl ;
    ptr ++ ;
    cout << "2nd adjacent address: " << ptr << endl ;
    return 0 ;
}
