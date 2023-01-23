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
Node* OddEven(Node *head)
{
    Node *Odd = head ;
    Node *cur = head, *prev = head ;
    while(cur != NULL)
    {
        if(cur->data%2 == 1 && prev->data%2==1)
            Odd = cur ;
        if(cur->data%2 == 1 && prev->data%2==0)
        {
            Node *temp ;
            if(Odd -> data%2 == 0)
            {  
                temp = Odd ; 
                Odd = cur ; 
                head = cur ;
                prev -> next = cur -> next ;
                Odd -> next = temp ; 
            } // true
            else
            {            
                temp = Odd -> next ;
                Odd -> next = cur ;
                prev -> next = cur -> next ;
                cur -> next = temp ;
                Odd = cur ;
            }
            cur = prev ;
        }
        prev = cur ;
        cur = cur -> next ;
    }
    return head ;
}
int main()
{
    print(OddEven(Input())) ;
    return 0;
}