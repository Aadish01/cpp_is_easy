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
Node* reverseIterative(Node *head)
{
    Node *Next = head -> next ;
    head -> next = NULL ;
    while(Next != NULL)
    {
        Node *temp = Next -> next ;
        Next -> next = head ;
        head = Next ;
        Next = temp ;
    }
    return head ;
}
int main()
{
    print(reverseIterative(Input())) ;
    return 0 ;
}