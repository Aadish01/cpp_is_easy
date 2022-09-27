#include<iostream>
using namespace std;
int AllIndexes(int *p,int size, int num, int *output)
{
    if(size == 0)
        return 0 ;
    int ret = AllIndexes(p+1, size-1, num, output) ;
    if(p[0] == num)
        
}
int main()
{
    
    return 0;
}