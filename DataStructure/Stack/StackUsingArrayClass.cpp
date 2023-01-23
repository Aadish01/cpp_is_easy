#include<iostream>
#include<climits>
using namespace std;
class Stack
{
    int *data ;
    int size ;
    int nextIndex ;

    public:

    Stack(int size)
    {
        this -> size = size ;
        nextIndex = 0 ;
        data = new int[size] ;
    }
    bool IsEmpty()
    {
        return nextIndex == 0 ;
    }
    int Size()
    {
        return nextIndex ; 
    }
    bool IsFull()
    {
        return nextIndex == size ;
    }
    void push(int i)
    {
        if(!IsFull())
        {
            data[nextIndex] = i ;
            nextIndex ++ ;
        }
        else
            cout << "Stack full...\n" ;
    }
    int pop()
    {
        if(!IsEmpty())
        {        
            nextIndex -- ;
            return data[nextIndex] ;
        }
        else
            return INT_MIN ;
    }
    int top()
    {
        if(!IsEmpty())
            return data[nextIndex-1] ;
        else 
            return INT_MIN  ;
    }
    void print()
    {
        int i = 0 ;
        while(i<nextIndex)
        {
            cout << data[i] << " " ;
            ++i ;
        }
        cout << "\n" ;
    }
};
