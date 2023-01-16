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
int Length(Node *head)
{
    if(head == NULL)
        return 0 ;
    return Length(head -> next) + 1 ;
}
Node* sort(Node *head1, Node *head2)
{
    Node *head = NULL , *tail = NULL ;
    if(head1 -> data > head2 -> data)
    {
        head = head2 ; 
        tail = head2 ;
        head2 = head -> next ;
    }
    else 
    {
        head = head1 ;
        tail = head1 ;
        head1 = head -> next ;
    }
    while(head1 != NULL && head2 != NULL)
    {
        if(head1 -> data > head2 -> data)
        {
            tail -> next = head2 ;
            tail = tail -> next ;
            head2 = head2 -> next ;
        }
        else
        {
            tail -> next = head1 ;
            tail = tail -> next ;
            head1 = head1 -> next ;
        }
    }
    if(head2 != NULL)
    {
        tail -> next = head2 ;
    }
    if(head1 != NULL)
    {
        tail -> next = head1 ;
    }
    return head ;
}
Node* Mid(Node *head)
{
    Node *slow = NULL, *fast = NULL;
    if(head != NULL)
        slow = head ;
    if(head != NULL)
        fast = head -> next;
    while(fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next ;
        fast = fast -> next -> next ;
    }
    return slow ;
}
Node* MergeSort(Node *head)
{
    if(head ->next == NULL)
        return head ;
    Node *head1 = head ;
    head = Mid(head) ;
    Node *head2 = head -> next ;
    head -> next = NULL ;
    head = sort(MergeSort(head1), MergeSort(head2)) ;
    return head ;
}
int main()
{
    print(MergeSort(Input())) ;
    return 0;
}