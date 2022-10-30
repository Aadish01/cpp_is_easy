// DP top Down Approach
// MINIMUM COIN CHANGE
#include<climits>
#include<iostream>
using namespace std;
int MinCoinChange(int num, int coin[], int size, int dp[])
{
    if(num==0)
    {
        return 0 ;
    }
    if(dp[num]!=0)
    {
        return dp[num] ;
    }
    int min = INT_MAX, temp;
    for(int i=0; i<size; i++)
    {
        if(num-coin[i]>=0)
            temp = MinCoinChange(num-coin[i], coin, size, dp) + 1;
        if(min>temp)
            min = temp ;
    }
    dp[num] = min ;
    return dp[num] ;
}
int main()
{
    int coin[] = {1,3,5} ;
    int size = sizeof(coin)/sizeof(int) ;
    int dp[100] = {0} ;
    cout << MinCoinChange(8,coin,size,dp) ;
    return 0;
}