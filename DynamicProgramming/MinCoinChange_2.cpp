// DP BOTTOM UP APPROACH
// MINIMUM COIN CHANGE
#include<iostream>
#include<climits>
using namespace std;
int minu(int num, int coins[], int size, int dp[])
{
    if(num==0)
        return 0 ;
    dp[num] = minu(num-1,coins,size,dp) ;
    int min = INT_MAX,temp ;
    for(int i=0;i<size;i++)
    {
        if(num-coins[i]>=0)
        {
            temp = dp[num-coins[i]] + 1 ;
            if(temp<min)
                min = temp ;
        }
    }
    dp[num] = min ;
    return dp[num] ;
}
int main()
{
    int coins[] = {1,3,5} ;
    int size = sizeof(coins)/sizeof(int) ;
    int dp[100] = {0} ;
    cout << minu(9,coins,size,dp) ;
    return 0;
}