#include<iostream>
using namespace std;
int SumOfArray(int *a,int size)
{
    if(size==1)
        return a[0] ;
    return a[0] + SumOfArray(a+1,size-1) ;
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;
    cout << "Sum of array: " << SumOfArray(array, 10) ;
    return 0;
}