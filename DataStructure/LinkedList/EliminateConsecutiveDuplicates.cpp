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
Node* EliminateConsecutiveDuplicates(Node *head)
{   
    if(head -> next == NULL)
        return head ;
    Node *previous = EliminateConsecutiveDuplicates(head -> next) ;
    if(head -> data == previous -> data)
    {
        free(head) ;
        return previous ;
    }
    else
        head -> next = previous ;
    return head ;
}
int main()
{
    Node *head = Input() ;
    print(EliminateConsecutiveDuplicates(head)) ;
    return 0;
}