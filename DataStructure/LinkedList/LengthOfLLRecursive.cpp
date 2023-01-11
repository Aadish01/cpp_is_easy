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
int main()
{
    cout << Length(Input()) ;
    return 0;
}