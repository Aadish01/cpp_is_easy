// ❤️ ❤️ ❤️

#include<iostream>
#include "NodeClass.cpp"
using namespace std;
Node* insert(Node *head, int i, int data)
{
    int counter = 1 ;
    if(head==NULL)
    {
        return NULL ;
    }
    if(i<1)
    {
        cout << "Are you kidding me? " << endl ;
        return NULL ;
    }
    if(i == counter)
    {
        Node *N = new Node(data) ;
        N -> next = head ;
        head = N ;
        return head ;
    }
    Node *temp = head ;
    // traversal 
    while(counter<i-1) // condition
    {
        if(temp == NULL)
        {
            cout << "LinkedList too short...\n" ;
            return NULL ;
        }
        temp = temp -> next ;
        counter++ ;
    }
    Node *N = new Node(data) ;
    Node *p = temp -> next ;
    temp -> next = N ;
    N -> next = p ;
    return head ;
}
int main()
{
    Node N1(3); 
    Node N2(5);
    Node N3(6) ;
    N1.next = &N2 ;
    N2.next = &N3 ;
    Node *head = &N1 ;
    print(insert(head, 3, 7)) ;
    return 0;
}