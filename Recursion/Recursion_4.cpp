#include<iostream>
using namespace std;
int Digits(int n)
{
    if(n<10)
        return 1 ;
    return 1 + Digits(n/10) ;
}
int main()
{
    int n ;
    cout << "enter value: " ;
    cin >> n ;
    cout << "no. of digits: " << Digits(n) << endl ;
    return 0;
}