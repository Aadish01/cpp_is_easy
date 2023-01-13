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
void PrintReverse(Node *head)
{
    if(head == NULL)
        return ;
    PrintReverse(head -> next) ;
    cout << head -> data << " " ;

}
int main()
{
    Node *head = Input() ;
    PrintReverse(head) ;
    return 0;
}
