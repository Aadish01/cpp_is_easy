#include<iostream>
using namespace std;

int RetSub(int arr[],int size, int Output[][20])
{
    if(size==0)
    {
        Output[0][0] = 0 ;
        
        return 1; 
    }
    int size2 = RetSub(arr+1, size-1, Output) ;
    for(int i = 0; i<size2; i++)
    {
        Output[size2+i][0] = Output[i][0] + 1 ;
        Output[size2+i][1] = arr[0] ;
        for(int j = 0; j<Output[i][0]; j++)
        {
            Output[size2+i][j+2] = Output[i][j+1] ;
        }
    }
    return size2*2 ;
}
int main()
{
    int array[] = {15, 20, 12} ;
    int size = 3 ;
    int output[20][20] ;
    int size2 = RetSub(array, size, output) ;
    for(int i =0; i<size2; i++)
    {
        for(int j=0; j< output[i][0]; j++)
        {
            cout<< output[i][j+1] << " ";
        }
        cout<< endl ;
    }
    return 0;
}