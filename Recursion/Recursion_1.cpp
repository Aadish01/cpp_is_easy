#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n == 0) // base case
        return 1 ;
    int output = factorial(n - 1) ; // n-1 case
    return output*n ; // n case 
}

// ! PMI says: ! 
// 1.take care of base case
// 2.don't worry about n-1 case
// 3.just complete n case

int main()
{
    cout << factorial(4) ;
    return 0;
}