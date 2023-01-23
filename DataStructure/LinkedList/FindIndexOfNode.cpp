#include<iostream>
#include "NodeClass.cpp"
using namespace std;
int FindIndex(Node *head, int data)
{
    if(head == NULL)
    {
        return -1 ;
    }
    if(head -> data == data)
        return 0 ;
    int i = FindIndex(head -> next, data) ;
    if(i < 0)
        return i ;
    return i + 1 ;
}
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
int main()
{
    Node *head = Input() ;
    cout << FindIndex(head, 2) ;
    return 0;
}