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
Node* DeleteRecurrsive(Node *head, int pos)
{
    if(pos==0)
        return head -> next ;
    Node *temp = DeleteRecurrsive(head->next, pos-1) ;
    head -> next = temp ;
    return head ;
}
int main()
{
    Node *head = Input() ;
    int pos ;
    cin >> pos ;
    print(DeleteRecurrsive(head, pos)) ;
    return 0;
}