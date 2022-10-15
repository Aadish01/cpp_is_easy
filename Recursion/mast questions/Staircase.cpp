#include<iostream>
using namespace std;
int staircase(int Num)
{
    if(Num<0)
        return 0;
    if(Num==0)
        return 1;
    int a,b,c ;
    a = staircase(Num-1);
    b = staircase(Num-2);
    c = staircase(Num-3);
    return a+b+c ;
}
int main()
{
    cout<<staircase(2) ;
    return 0;
}