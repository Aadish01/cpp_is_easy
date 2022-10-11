#include<iostream>
using namespace std;
int partition(int *array, int si, int ei)
{

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
    return 0;
}