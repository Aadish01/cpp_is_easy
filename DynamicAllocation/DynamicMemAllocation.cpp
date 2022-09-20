#include<iostream>
using namespace std;
int main()
{
    int *p = new int ;
    *p = 10 ;
    cout << "value of p in Heap mem.: " << *p << endl ;
    // char *p2 = new char ;
    // double *p3 = new double ;
    // int *p4 = new int[50] ;
    // also we can do 
    unsigned size = 0 ;
    cout << "Enter size of array: " ;
    cin >> size ;
    int *p5 = new int[size] ; // Dynamic mem. allocation
    cout << "Stack Memory Created..." << endl ;
    cout << "enter values of the array: " << endl ;
    for(int i = 0; i < size ; i++)
    {
        cin >> p5[i] ;
    }
    for(int j = 0; j < size ; j++)
    {
        cout<<p5[j]<<" " ;
    }
    delete p ; // just deletes Heap memory
    delete p5 ; // just delttes Heap memory
    cout << endl << "Memory Deleted!" << endl ;
    return 0;
}