#include<iostream>
using namespace std;
int ReturnSumto(int sum,int *arr,int size_arr, int **output)
{
    if(sum<0)
        return 0 ;
    if(sum==0)
    {
        output[0][0] = 0 ;
        return 1 ;
    }
    int all = 0 ;
    for(int i = 0; i < size_arr; i++)
    {   
        int temp = 0 ;
        temp += ReturnSumto(sum-arr[i],arr+i,size_arr, output) ;
        if(temp==1)
        {
            cout << "; " << endl;
        }
        all += temp ;
    }
    return all ;
}
int main()
{
    int array[] = {5, 12, 3, 17, 1, 18, 15, 3, 17} ;
    int size = 9 ;
    int **output = new int*[10] ;
    int sum = 6 ;
    int size2 = ReturnSumto(sum, array, size, output) ;
    // for(int i=0; i<size2; i++)
    // {
    //     for(int j=1; j<output[i][0]; j++)
    //     {
    //         cout << output[i][j+1] << " ";
    //     }
    //     cout << endl ;
    // }
    cout << size2 ;
    return 0;
}