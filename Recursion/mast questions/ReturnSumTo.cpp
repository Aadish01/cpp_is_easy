// return no of ways by which sum can be achieved by non repeating coins
#include<iostream>
using namespace std;
int ReturnSumto(int sum,int *arr,int size_arr,int prev)
{
    if(sum<0)
        return 0 ;
    if(sum==0)
        return 1 ;
    int all = 0 ;
    for(int i = 0; i < size_arr; i++)
    {   
        if(prev<arr[i])
        all += ReturnSumto(sum-arr[i],arr+i,size_arr,arr[i]) ;
    }
    return all ;
}
int main()
{
    int arr[] = {1,3,4,5} ;
    cout << ReturnSumto(6, arr, 4, 0) ;
    return 0 ;
}