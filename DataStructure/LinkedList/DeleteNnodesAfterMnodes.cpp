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
Node* DeleteNnodes(Node *head, int M, int N)
{

    Node *cur = head ;
    Node *prev = head ;
    if(M<1)
        return NULL ;
    int m = M, n = N;
    while(cur != NULL)
    {
        if(m>0)
        {   
            prev = cur ; 
            cur = cur -> next ;
            m-- ;
        }
        else if(n>0)
        {
            prev -> next = cur -> next ;
            delete cur ;
            cur = prev -> next ;
            n-- ;
        }
        if(!n && !m)
        {
            n = N ;
            m = M ;
        }    
    }
    delete &cur ;
    delete &prev ;
    return head ;
}
int main()
{
    print(DeleteNnodes(Input(), 1, 2)) ;
    return 0;
}