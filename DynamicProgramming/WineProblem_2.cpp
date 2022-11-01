// wine Max profit problem
// bottom up approach
#include<iostream>
using namespace std;
int WineProfit(int wines[],int year, int i, int j, int dp[][100])
{
    if(i>j)
        return 0 ;
    if(dp[i][j]!=0)
        return dp[i][j] ;
    int a = WineProfit(wines, year+1, i+1, j, dp) + year*wines[i] ;
    int b = WineProfit(wines, year+1, i, j-1, dp) + year*wines[j] ;
    return dp[i][j] = max(a,b) ;
}
int main()
{  
    int wines[] = {2, 3, 5, 1, 4} ;
    int size = sizeof(wines)/sizeof(int) ;
    int dp[100][100] = {0} ;
    cout << WineProfit(wines, 1, 0, size-1, dp) ;
    return 0;
}