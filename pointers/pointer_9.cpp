#include<iostream>
using namespace std;
void increment_1(int **p)
{
    p = p + 1 ;
}
void increment_2(int **p)
{
    *p = *p + 1 ;
}
void increment_3(int **p)
{
    **p = **p + 1 ;
}
int main()
{
    int i = 10 ;
    int * p1 = &i ;
    int ** p2 = &p1 ;
    
    // use below functions one by one to see the working of pointers 

    // increment_1(p2) ;
    // cout << i << " " << p1 << " " << p2 << endl ;
    // increment_2(p2) ;
    // cout << i << " " << p1 << " " << p2 << endl ;
    increment_3(p2) ;
    cout << i << " " << p1 << " " << p2 << endl ;
    return 0;
}