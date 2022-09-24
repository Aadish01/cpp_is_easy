#include<iostream>
using namespace std;
int FindIndex(int *a, int size, int num)
{
    if(size==0)
    {
        return -1 ;
    }
    if(a[0]==size)
        return 0 ;
    int index = FindIndex(a+1,size-1,num) ;
    if(index == -1)
        return -1 ;
    else
        return ++index ;
}
int main()
{
    
    int arr[] = {7,6,4,6} ;
    cout << FindIndex(arr, 4, 6) ;
    return 0;
}