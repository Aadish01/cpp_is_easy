#include<iostream>
#include "NodeClass.cpp"
using namespace std;
Node* takeInput()
{
    int data = 0 ;
    Node *head = NULL, *tail = NULL ;
    cout << "Enter Data: " ;
    cin >> data ;
    while(data != -1)   
    {
        // static declaration will be deleted every time 
        // hence remember to dynamically allocate 
        Node *N = new Node(data) ;
        if(head == NULL)
            head = N ;
        else
            tail -> next = N ;
        tail = N ;
        cout << "Enter data: " ;
        cin >> data ;
    }
    return head ;
}
int main()
{
    Node *head = takeInput() ;
    print(head) ;
    return 0;
}