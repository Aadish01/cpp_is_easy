#include <iostream>

using namespace std;

int function(int *p, int size, int num)
{
    if( size == 0)
    return -1 ;
    if(p[0] ==num)
    return 0 ;
    int index = function(p+1, size-1, num) ;
    if(index==-1)
    return -1 ;
    else
    return index+1 ;
}
int main()
{
    int arr[] = { 2, 5, 6, 4, 6} ;
    cout << function(arr, 5, 4) ;

    return 0;
}