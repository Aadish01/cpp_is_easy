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
bool Palindrome(Node **head, Node *tail)
{
    if(tail == NULL)
        return true; 
    bool var = Palindrome(head, tail -> next) ;
    if(var == false)
        return false ;
    bool var2 = true ;
    if((*head) -> data != tail -> data)
        var2 = false;
    *head = (*head) -> next ;
    return var2 ;
}
int main()
{
    Node *head = Input() ;
    cout << boolalpha <<Palindrome(&head, head) ;
    return 0;
}