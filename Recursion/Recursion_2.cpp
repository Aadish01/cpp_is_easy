#include<iostream>
using namespace std;
int power(int x, int n) 
{
    if (n<=1)
        return x ;
    return x*power(x, n-1) ;
}
int main()
{
    int x, n ;
    cout << "Enter number and power: " ;
    cin >> x >> n ;
    cout << power(x, n) ;
    return 0;
}