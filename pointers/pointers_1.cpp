#include<iostream>
using namespace std;
int main()
{
    int num = 10 ;
    cout << "value of num: " << num << endl ;
    cout << "address of num: " << &num << endl ;
    int *p = &num ; 
    cout << "value of pointer p: " << p << endl ;
    (*p)++ ;
    cout<< "new value of num: " << num << endl ;
    return 0 ;
    // when ever we make pointer initialise it with 0 or null 
    // this will protect sensitve mem. locations to be disturace
}
