// WINE MAX PROFIT PROBLEM
// TOP DOWN APPROACH 
#include<iostream>
using namespace std;
int WinesProfit(int wines[], int i, int j, int year, int dp[][100])
{
    if(i>j)
        return 0 ;
    int a=0,b=0;

    if(dp[i][j] != 0)
        return dp[i][j] ;

    a = WinesProfit(wines, i+1, j, year+1, dp) + wines[i]*year ;
    b = WinesProfit(wines, i, j-1, year+1, dp) + wines[j]*year ;

    return dp[i][j] = max(a,b) ;
}
int main()
{
    int wines[] = {2, 3, 5, 1, 4} ;
    int size = sizeof(wines)/sizeof(int) ;
    int dp[100][100] = {0} ;
    cout << WinesProfit(wines, 0, size-1, 1, dp) ;
    return 0;
}