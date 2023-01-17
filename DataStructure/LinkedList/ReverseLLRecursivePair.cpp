#include<iostream>
#include "NodeClass.cpp"
using namespace std;
Node* Input()
{
    Node *head = NULL ;
    int data = 0 ;
    cin >> data ;
    Node *temp = NULL ;
    while(data!=-1)
    {
        Node *N = new Node(data) ;
        if(temp == NULL)
            head = N ;
        else
            temp -> next = N ;
        temp = N ;
        cin >> data ; 
    }
    return head ;
}
class Pair
{
    public: 
    Node* head ;
    Node* tail ;
    Pair(Node *head, Node *tail)
    {
        this -> head = head ;
        this -> tail = tail ;
    }
    void operator=(Pair P)
    {
        this -> head = P.head ;
        this -> tail = P.tail ;
    }
};
Pair reverseRecursive(Node *head)
{
    Pair P(NULL, NULL) ;
    if(head -> next == NULL)
    {
        P.head = head ;
        P.tail = head ;
        return P ;
    }
    P = reverseRecursive(head->next) ;
    P.tail -> next = head ;
    head -> next = NULL ;
    P.tail = head ;
    return P ;
}
int main()
{
    Pair p = reverseRecursive(Input()) ;
    print(p.head) ;
    return 0 ;
}