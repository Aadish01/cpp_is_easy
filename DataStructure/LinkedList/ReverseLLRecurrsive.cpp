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
Node* reverseRecursive(Node *head)
{
    if(head -> next == NULL)
        return head ;
    Node *newhead = reverseRecursive(head->next) ;
    Node *tail = newhead ;
    while(tail -> next != NULL)
        tail = tail -> next ;
    tail -> next = head ;
    head -> next = NULL ;
    return newhead ;
}
int main()
{
    print(reverseRecursive(Input())) ;
    return 0 ;
}