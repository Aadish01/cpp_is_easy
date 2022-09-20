#include<iostream>
using namespace std;
int main()
{
    int i = 10 ;
    int * p_1 = &i ;
    int ** p_2 = &p_1 ; // double pointer ;
    cout << "Using i: " << &i << endl ;
    cout << "Using p_1: " << p_1 << endl ;
    cout << "Using p_2: " << *p_2 << endl ;

    cout << endl << i << endl ; // #1
    cout << *p_1 << endl ; // #2
    cout << **p_2 << endl ; // #3
    return 0;
}