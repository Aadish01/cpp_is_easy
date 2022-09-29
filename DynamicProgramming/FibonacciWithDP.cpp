// bottom-up approach
// without recursion actually
#include<iostream>
using namespace std;
int fibonacci(int num, int *arr)
{
    for(int i = 2; i <= num ; i++ )
    {
        arr[i] = arr[i-1] + arr[i-2] ;
    }
    return arr[num] ;
}
// Complexities :
// Space : O(N)
// Time : O(N)
int main()
{
    int arr[100] = {0} ;
    arr[1] = 1 ;
    cout << fibonacci(6, arr) ;
    return 0;
}