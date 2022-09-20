#include<iostream>
using namespace std;
int sum(int a[], int size)
{
    cout << sizeof(a) << endl ; // important to notice
}
int main()
{
    int arr[10] ;
    cout << sizeof(arr) << endl ;
    sum(arr, 10) ;
    return 0 ;
}