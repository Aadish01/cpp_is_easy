#include<iostream>
#include<climits>
using namespace std;
template<typename T>
class Stack
{
    T *data ;
    int size ;
    int nextIndex ;

    public:

    Stack(int size)
    {
        this -> size = size ;
        nextIndex = 0 ;
        data = new T[size] ;
    }
    bool IsEmpty()
    {
        return nextIndex == 0 ;
    }
    T Size()
    {
        return nextIndex ; 
    }
    bool IsFull()
    {
        return nextIndex == size ;
    }
    void push(T i)
    {
        if(!IsFull())
        {
            data[nextIndex] = i ;
            nextIndex ++ ;
        }
        else
            cout << "Stack full...\n" ;
    }
    T pop()
    {
        if(!IsEmpty())
        {        
            nextIndex -- ;
            return data[nextIndex] ;
        }
        else
            return 0 ;
    }
    T top()
    {
        if(!IsEmpty())
            return data[nextIndex-1] ;
        else 
            return 0  ;
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

