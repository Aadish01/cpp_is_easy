// #include<iostream>
// using namespace std;
// int TillingWays(int n)
// {
//     if(n<0)
//         return 0 ;
//     if(n==0)
//         return 1 ;
//     return TillingWays(n-1) + TillingWays(n-4) ;
// }
// int main()
// {
//     cout << TillingWays(6) ;
//     return 0;
// }
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
 #define fio ios_base::sync_with_stdio(false)
 
#define ll long long int

#define s(x) scanf("%lld",&x)
#define s2(x,y) s(x)+s(y)
#define s3(x,y,z) s(x)+s(y)+s(z)
 
#define p(x) printf("%lld\n",x)
#define p2(x,y) p(x)+p(y)
#define p3(x,y,z) p(x)+p(y)+p(z)
#define F(i,a,b) for(ll i = (ll)(a); i <= (ll)(b); i++)
#define RF(i,a,b) for(ll i = (ll)(a); i >= (ll)(b); i--)
 
#define ff first
#define ss second
#define mp(x,y) make_pair(x,y)
#define pll pair<ll,ll>
#define pb push_back

ll inf = 1e18;
ll mod = 1e9 + 7 ;
ll gcd(ll a , ll b){return b==0?a:gcd(b,a%b);}
int main()
{
  // freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  ll t=1;
  s(t);
  while(t--){
    ll n,m;
    s2(n,m);
    vector<ll>dp(n+1,0);
    dp[0]=1ll;
    for(ll i=1;i<=n;i++){
      dp[i]=dp[i-1];
      dp[i]+=((i-m)>=0)?dp[i-m]:0; 
      dp[i]%=mod;
    }
    p(dp[n]);
  }
}