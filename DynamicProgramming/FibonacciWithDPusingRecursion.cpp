// top-down approach Using Dynamic Programming
// adding some memory to store already computed problem
#include<iostream>
using namespace std;
int fibonacci(int n, int *dp)
{
    if(n==0 || n==1)
    {
        return n ;
    }
    // look up (don't look for the ans anymore)
    if(n[dp] != 0)
        return n[dp] ;
    int num = fibonacci(n-1, dp) + fibonacci(n-2, dp);
    // Storing the answer in dp
    return dp[n] = num ;
}
// complexities :
// Space : O(N) same as Recursion
// Time : N + N-1 ~ O(N) big difference exp. to linear
int main()
{
    int dp[100] = {0} ;
    cout << fibonacci(5 , dp) ;
    return 0;
}