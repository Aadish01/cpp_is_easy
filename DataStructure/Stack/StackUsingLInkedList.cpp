#include<iostream>
using namespace std;
template<typename type>
class Node
{
    public:

    type data ;
    Node *next ;

    Node(type data)
    {
        this -> data = data ;
        next = NULL ;
    }
};
template<typename t>
class StackUsingLL
{
    Node<t> *head ;

    int size ;
    public:

    StackUsingLL()
    {
        size = 0 ;
        head = NULL ;
    }
    void push(t data)
    {
        Node<t> *newNode = new Node<t>(data) ;
        newNode -> next = head ; 
        head = newNode ;
        size++ ;
    }
    t pop()
    {
        if(IsEmpty())
            return 0 ;
        t dt = head -> data ;
        head = head -> next ;
        size-- ;
        return dt ;
    }
    t top()
    {
        return head-> data ;
    }
    int Size()
    {
        return size ;
    }
    bool IsEmpty()
    {
        return !size ;
    }
};
int main()
{
    StackUsingLL<int> S ;
    int loops ;
    cin >> loops ;
    for(int i=0; i<loops ; i++)
    {
    int Q ;    
    cin >> Q ;
    switch (Q)
    {
    case 1:
        int data ;
        cin >> data ;
        S.push(data) ;
        break;
    case 2:
        cout << S.pop() << endl ;
        break;
    case 3:
        cout << S.top() << endl ;
        break;
    case 4: 
        cout << S.Size() << endl ;
        break;
    case 5:
        cout << boolalpha << S.IsEmpty() ;
        break;
    }
    }
    return 0;
}