#include<iostream>
#include "NodeClass.cpp"
using namespace std;
Node* DeleteIth(Node *head, int i)
{
    int counter = 1 ;
    if(i==counter)
    {
        head = head -> next ;
        return head ;
    }
    Node *temp = NULL ;
    Node *HEAD = head ;
    while(counter<i)
    {
        temp = HEAD ;
        HEAD = HEAD -> next ;
        counter++ ;
    }
    temp -> next = HEAD -> next ;
    return head ;
}
// ⤵️ even this would work perfecty

    // Node **temp = NULL ;
    // Node *HEAD = head ;
    // while(counter<i)
    // {
    //     HEAD = HEAD -> next ;
    //     temp = &HEAD ;
    //     counter++ ;
    // }
    // **temp = *HEAD -> next ;
    // return head ;

int main()
{
    Node N1(3); 
    Node N2(5);
    Node N3(6) ;
    Node N4(7) ;
    N1.next = &N2 ;
    N2.next = &N3 ;
    N3.next = &N4 ;
    Node *head = &N1 ;
    print(DeleteIth(head, 3)) ;
    return 0;
}