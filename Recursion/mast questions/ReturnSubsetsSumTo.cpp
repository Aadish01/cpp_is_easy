#include<iostream>
using namespace std;

int RetSub(int arr[],int size,int sum, int Output[][10])
{
    
}
int main()
{
    int array[] = {5, 12, 3, 17, 1, 18, 15, 3, 17} ;
    int size = 9 ;
    int output[9][10] ;
    int sum = 6 ;
    int size2 = RetSub(array, size, sum, output) ;
    for(int i=0; i<size2; i++)
    {
        for(int j=0; j<output[i][0]; j++)
        {
            cout << output[i][j+1] << " ";
        }
        cout << endl ;
    }
    return 0;
}