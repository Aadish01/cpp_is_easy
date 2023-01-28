#include<iostream>
using namespace std;
template<typename T>
class Node
{
    public:

    T data ;
    Node *next ;

    Node(T data)
    {
        this -> data = data ;
        next = NULL ;
    }
};
template<typename T>
class QueueUsingLL
{
    Node<T> *data ;
    Node<T> *head ;
    Node<T> *tail ;
    int size ;
    public:

    QueueUsingLL()
    {
        data = NULL ;
        head = NULL ;
        tail = NULL ;
        size = 0 ;
    }
    void Enqueue(T data)
    {
        Node<T> *N = new Node<T>(data) ;
        if(IsEmpty())
        {
            head = N ;
            tail = N ;
        }
        else
            {tail -> next = N ;
                tail = tail -> next ;
            }
        size++ ;
    }
    T Dequeue()
    {
        if(IsEmpty())
        {
            cout << "Empty..." ;
            return 0 ;
        }
        T dta = head -> data ;
        Node<T> *N = head ; 
        head = head -> next ;
        size-- ;
        delete N ;
        return dta ;
    }
    T top()
    {
        if(!IsEmpty())
        {
            return head->data ;
        }
        else
        {
            cout << "Empty..." ;
            return 0 ;
        }
    }
    bool IsEmpty()
    {
        return size==0 ;
    }
    int Size()
    {
        return size ;
    }
};