#include<iostream>
using namespace std;
void swap(int *array, int s, int e)
{
    int temp = array[s] ;
    array[s] = array[e] ;
    array[e] = temp ;
}
int partition(int *array, int si, int ei)
{
    int count = 0 ;
    int pivot = si ;
    for(int i = si+1; i<=ei ; i++)
    {
        if(array[i]<array[pivot])
            count++ ;
    }
    pivot = count + si ;
    swap(array, si, pivot) ;
    while(si<pivot&&ei>pivot)
    {
        if(array[si]>=array[pivot])
            if(array[ei]<=array[pivot])
                {
                    swap(array, si, ei) ;
                    si++ ;
                    ei-- ;
                }
            else
                ei-- ;
        else
            if(array[ei]<=array[pivot])
                si++ ;
            else
            {
                si++ ;
                ei-- ;
            }
    }
    return pivot ;
}
void quick_sort(int *array, int si, int ei)
{
    if(si>=ei)
        return ;
    int  c = partition(array, si, ei) ;
    quick_sort(array, si, c-1) ;
    quick_sort(array, c+1, ei) ;
}
int main()
{
    int arr[10] = {1, 3, 3, 2, 9, 0, 8, 8, 4, 7} ;
    quick_sort(arr, 0, 9) ;
    for(int i = 0; i<10 ;i++)
        cout<< arr[i] << " " ;
    return 0;
}