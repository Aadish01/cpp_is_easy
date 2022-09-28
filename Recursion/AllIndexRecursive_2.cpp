#include<iostream>
using namespace std;
int AllIndexes(int *p,int size, int num, int *output)
{
    if(size == 0)
        return 0 ;
    int ret = AllIndexes(p, size-1, num, output) ;
    if(p[size-1] == num)
    {
        output[ret] = size-1 ;
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