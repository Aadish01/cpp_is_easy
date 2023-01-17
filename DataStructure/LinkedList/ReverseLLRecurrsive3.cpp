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
    Node *newHead = reverseRecursive(head->next) ;
    head -> next -> next = head ;
    head -> next = NULL ;
    return newHead ;
}
int main()
{
    print(reverseRecursive(Input())) ;
    return 0;
}