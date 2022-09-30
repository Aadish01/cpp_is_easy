// bottom-up approach without recursion
// but space optimised
#include<iostream>
using namespace std;
int fibonacci(int num)
{
    int a = 1, b = 0 ;
    if(num < 2)
        return num ;
    else
        for(int i = 2; i <=num ; i++)
        {
            int temp = a + b ;
            b = a ;
            a = temp ;
        }
    return a ;
}
int main()
{
    cout << fibonacci(7) ;
    return 0;
}