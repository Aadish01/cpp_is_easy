#include<iostream>
using namespace std;
int AllIndexes(int *p,int size, int num, int *output)
{
    if(size == 0)
        return 0 ;
    int ret = AllIndexes(p+1, size-1, num, output) ;
    if(ret)
    {
        for(int j = 0 ; j<ret ; ++j)
        {
            output[j] += 1 ;
        }
    }
    if(p[0] == num)
    {
        for(int i = ret; i>0 ; --i )
        {
            output[i] = output[i-1] ;
        }
        output[0] = 0 ;
        ret +=1 ;
    }
    return ret ;
}
int main()
{
    int arr[] = {1, 3, 4, 1, 3, 1} ;
    int out[6] ;
    int ret = AllIndexes(arr, 6, 1, out) ;
    cout << ret << endl;
    for (int i = 0; i < ret; i++)
    {
        cout << out[i] << " " ;
    }
    return 0;
}