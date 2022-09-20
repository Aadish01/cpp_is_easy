#include<iostream>
using namespace std;
void increment(int &n) // Pass By Reference
{
    n++ ;
}
int &f(int n) // return by reference Issue
{
    int a = n ;
    return a ;
}
int * f2() // bad practise
{
    int i = 39 ;
    return &i ;
}
int main()
{
   int i = 10 ;
   int j = i ; // new memory created
   cout << "original i: " << i << endl ; 
   cout << "normal variable j: " << j << endl ;
   int &k = i ; // k is reference variable now
   // no new memory created
   k++  ;
   cout << "reference variable k: " << k << endl ;
   cout << "changed i: " << i << endl ;
   // declaration of reference variable needs to be initalised
   cout << "calling increment function..." << endl ;
   increment(i) ;
   cout << "New value of i = " << i ;
//    cout << "calling other function..." << endl ;
//    int &k = f(i) ; // Issue! use with care
//    cout << "calling other function..." << endl ;
//    int *k = f2() ; // Issue! use with care
   return 0;
}