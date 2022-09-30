// bottom-up approach
// this is what it is 
#include<iostream>
#include<climits>
using namespace std;
int MSTO(int num)
{
    int *p = new int[num] ;
    p[0] = 0 ;
    for(int i=2 ; i<=num ; i++)
    {
        int a, b, c ;
        a = b = c = INT_MAX ;
        if(i%2==0)
            a = p[i/2-1] +1 ;
        if(i%3==0)
            b = p[i/3-1] +1 ;
        c = p[i-2] +1 ;
        p[i-1] = min(min(a, b), c) ;
    }
    return p[num-1] ;
}
int main()
{
    cout << MSTO(6) ;
    return 0;
}