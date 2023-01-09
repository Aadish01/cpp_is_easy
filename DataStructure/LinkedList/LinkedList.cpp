#include<iostream>
using namespace std;
#include "NodeClass.cpp"
int main()
{
    Node N1(2) ;
    Node N2(5) ;
    N1.next = &N2 ;
    Node *head = &N1 ;
    print(head) ;
    return 0;
}