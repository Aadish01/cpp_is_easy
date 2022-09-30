// Minimum Steps to go to 1 from any given number
// given three conditions :
//  n-1, n/2, n/3 
// find length of minimum path required to do so

// top-down approach
#include<iostream>
#include<climits>
using namespace std;

int MSTO(int num, int *dp)
{
    if(num==1) // base case
        return 0 ;
    int a, b, c ;
    a = b = c = INT_MAX; 
    // memoristion 
    if(dp[num] != 0)
        return dp[num] ;
    
    if(num%2==0)
        a = MSTO(num/2, dp) +1 ;
    if(num%3==0) 
        b = MSTO(num/3, dp) +1 ;
    c = MSTO(num - 1, dp) +1 ;
    return dp[num] = min(min(a, b), c) ;
}
// mast question ekdum !!!
// Complexity :
// time : O(N)
int main()
{
    int dp[100] = {0} ;
    cout << MSTO(6, dp) ;
    return 0;
}