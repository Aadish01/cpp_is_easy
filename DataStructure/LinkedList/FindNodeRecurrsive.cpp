#include<iostream>
#include "NodeClass.cpp"
using namespace std;
Node* Input()
{
    Node *head = NULL ;
    Node *temp = NULL ;
    int data ;
    cin >> data ;
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
int FindNode(Node *head, int data)
{
    if(head == NULL)
        return -1 ;
    int temp = FindNode(head -> next, data) ;
    if(head -> data == data || temp > -1)
        return temp + 1 ;
    else 
        return temp ;
}
int main()
{
    Node *head = Input() ;
    cout << FindNode(head, 4) ;
    return 0;
}