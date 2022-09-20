#include<iostream>
using namespace std;
int sum(int *a, int size)
{
    int ans = 0 ;
    for(int i = 0; i < size ; i ++)
    {
        ans = ans + a[i] ;
    }
    return ans ;    
}
int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9} ;
    int size_arr = sizeof(arr)/4 ;
    cout << "Sum of values in array: " << sum(arr, size_arr) << endl ;
    // we can also pass part of array
    cout << "Sum of values in array: " << sum(arr + 8, size_arr - 8) << endl ;
    // see how i decresed value of size, as it will cause error, if not done.
    return 0 ;
}