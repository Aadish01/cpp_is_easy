#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n == 0)
        return 0 ;
    if(n == 1)
        return 1 ;
    int num = fibonacci(n-1) + fibonacci(n-2);
    return num ;
}
int main()
{
    int num = 0 ;
    cout << "Enter which fibonacci number: " ;
    cin >> num ;
    cout << "Number is: " << fibonacci(num) ;
    return 0;
}