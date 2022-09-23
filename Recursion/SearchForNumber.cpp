#include<iostream>
using namespace std;
int Searcher(int *a, int size, int num)
{
    if(a[0]==num)
        return true ;
    if(size==1)
        return false ;
    return Searcher(a+1, size-1, num) ; 
}
int main()
{
    int num, size ;
    cout << "Enter size: " ;
    cin >> size ;
    int *arr = new int[size] ;
    for(int i = 0; i < size ; i++)
        cin >> arr[i] ;
    cout << "Entern number: " ;
    cin >> num ;
    cout << Searcher(arr, size, num) ;
    return 0;
}