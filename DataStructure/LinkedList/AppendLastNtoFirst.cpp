#include<iostream>
#include "NodeClass.cpp"
using namespace std;
Node* Input()
{
    int data = 0 ;
    Node *head = NULL ;
    Node *temp = NULL ;
    cin >> data ;
    while(data != -1)
    {
        Node *N = new Node(data) ;
        if(head == NULL)
            head = N ;
        else
            temp -> next = N ;
        temp = N ;
        cin >> data ;
    }
    return head ;
}
Node* ApppendLastNtoFirst(Node *head, int N)
{
    int length = 0 ;
    Node *temp = head ;
    while (temp != NULL)
    {
        temp = temp -> next ;
        length++ ;
    }
    if(N>=length)
        N = N % length ;
    if(N>0)
{    temp = head ;
    int skip = length - N -1 ;
    while(skip)
    {
        temp = temp -> next ;
        skip-- ;
    }
    Node *NewHead = temp -> next ;
    Node *tail = NewHead ;
    temp -> next = NULL ;
    while(tail -> next != NULL)
    {
        tail = tail -> next ;
    }
    tail -> next = head ;
    head = NewHead ;
}
    return head ;
}
int main()
{
    Node *head = Input() ;
    print(ApppendLastNtoFirst(head, 3)) ;
    return 0;
}
