#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;
    int * ptr_1 = arr ;
    int * ptr_2 = &arr[0] ;
    cout << "address: " << ptr_1 << endl ;
    cout << "address: " << ptr_2 << endl ;
    // see above addresses are equal 
    ptr_1 ++ ;
    cout << "address of adjacent mem: " << ptr_1 << endl ;
    // we can't do that with arr meaning : arr++ ; will be illegal 
    // also what's most interesting is that arr and &arr are just same 
    cout << "Here's arr: " << arr << endl ;
    cout << "Here's arr's address: " << &arr << endl ;
    char ch = '0' ;
    cout << "Are they same?(Y/n): " ;
    cin >> ch ;
    return 0 ;
}
