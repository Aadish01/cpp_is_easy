#include<iostream>
using namespace std;
inline int max(int a, int b) // returns maximum
// inline function can optimise code by writing value where it is called 
// it is compiler choice to make function inline or not
{
    return (a>b)?a:b ; 
}
int sum(int a[], int size, int start = 0) // default args
// it will return the sum of values of array from start index
// note rightmost args can only be made default
{
    int sm = 0 ;
    for(int p = start; p < size ; p++)
        sm += a[p] ;
    return sm ;
}
int main()
{
    int a, b ;
    cin >> a >> b ;
    cout <<"max of " << a << " & " << b << ": " << max(a,b) << endl ; // jump required 
    // for function calling -> affects performance
    int arr[] = {1, 2, 3, 4, 5} ;
    cout << "sum: " << sum(arr, 5) ;
    return 0;
}