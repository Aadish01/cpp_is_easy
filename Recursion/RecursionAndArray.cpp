#include<iostream>
using namespace std;
bool IfSorted(int *a, int size)
{
    if(size == 0 || size == 1)
        return true ; 
    if(a[0]>a[1]) // compare the first two elements of array
        return false ;
    return IfSorted(a+1, size-1) ; // check the rest of the array 
} // best program I have ever seen 
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;
    cout << IfSorted(arr, 9) ;
    return 0;
}