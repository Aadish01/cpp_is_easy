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
    double db = 83.8e4 ;
    double *ptr_db= &db;
    cout << "address of ch: " << ptr_db << endl ;
    ptr_db = ptr_db- 1 ;
    cout << "address before ch: " << ptr_db << endl ;
    return 0 ;
}
