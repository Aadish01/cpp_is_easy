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
int main()
{
    Node *N = Mid(Input()) ;
    cout << N -> data ;
    return 0;
}