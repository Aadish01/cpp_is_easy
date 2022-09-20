#include<iostream>
using namespace std;
void print(int* p)
{
    cout << *p << endl ;
}
void incrementPointer(int *p)
{
    p = p + 1 ;
}
void incrementPointerValue(int *p)
{
    (*p)++ ;
}
int main()
{
    int i = 10 ;
    int *p = &i ;
    print(p) ;

    cout << p << endl ;
    incrementPointer(p) ;
    cout << p << endl ; // happens because *p is not changed
    // actually copy of p is changed not *p {copy by value}
    
    cout << *p << endl ;
    incrementPointerValue(p) ;
    cout << *p << endl ;
    return 0;
}