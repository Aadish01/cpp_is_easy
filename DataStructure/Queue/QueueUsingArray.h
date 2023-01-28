#include<iostream>
using namespace std;
template<typename T>
class Queue
{
    T *data ;
    int head ;
    int tail ;
    int size ;
    int capacity ;

    public:

    Queue(int size)
    {
        capacity = size ;
        data = new T[size] ;
        head = -1 ;
        tail = 0 ;
        this -> size = 0 ;
    }
    bool IsEmpty()
    {
        return size == 0 ;
    }
    bool IsFull()
    {
        return size == capacity ;
    }
    void enqueue(T data)
    {
        if(IsFull())
        {
            cout << "queue Overflow...\n" ;
            return ;
        }
        if(IsEmpty())
        {
            head++ ;
        }
        this -> data[tail] = data ;
        tail = (tail +1)%capacity ;
        size++ ;
    }
    T dequeue()
    {
        if(IsEmpty())
        {
            cout << "UnderFlow..." ;
            return 0 ;
        }
        T val = data[head] ;
        head = (head+1)%capacity ;
        size-- ;
        if(IsEmpty())
        head = -1 ;
        return val ;
    }
    int Size()
    {
        return size ;
    }
    T top()
    {
        if(!IsEmpty())
            return data[head] ;
        else    
        {   
            cout << "Empty..." ;
            return 0 ;
        }
    }
};