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
Node* reverseRecursive(Node *head, Node *tail )
{
    if(head -> next == NULL)
        return head ;
    Node *newhead = reverseRecursive(head->next, tail->next) ;
    tail -> next = head ;
    head -> next = NULL ;
    return newhead ;
}
int main()
{
    Node *head = Input() ;
    print(reverseRecursive(head, head-> next)) ;
    return 0;
}