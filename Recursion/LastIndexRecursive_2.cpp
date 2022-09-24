#include <iostream>

using namespace std;

int function(int *p, int size, int num)
{
    if( size == 0)
    return -1 ;
    if(p[size] == num)
    return size ;
    int index = function(p, size-1, num) ;
    if(index==-1)
    return -1 ;
    else 
    return index ;
}
int main()
{
    int arr[] = { 2, 4, 6, 4, 4} ;
    cout << function(arr, 5, 4) ;

    return 0;
}