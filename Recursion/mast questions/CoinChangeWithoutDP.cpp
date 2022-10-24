#include<iostream>
using namespace std;
int coin_change(int sum,int *coins,int num_coins, int pre)
{
    if(sum<0)
        return 0 ;
    if(sum==0)
        return 1 ;
    int all = 0 ;
    for(int i=0;i<num_coins;i++)
    {
        if(coins[i]>=pre) 
            all += coin_change(sum-coins[i], coins, num_coins, coins[i]) ;
    }
    return all ;
}
int main()
{
    int coins[] = {1,2,3} ;
    cout << coin_change(6, coins, 3, 0) ;
    return 0;
}
// 4: 1111 112 13 22 
// 5: 11111 1112 122 113 23 
// 6: 111111 11112 1113 1122 123 222 33
// 7: 1111111 111112 11113 11122 1123 1222 133 223 