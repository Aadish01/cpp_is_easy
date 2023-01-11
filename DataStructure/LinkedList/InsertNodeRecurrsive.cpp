#include<iostream>
#include "NodeClass.cpp"
using namespace std;
Node* InsertRecurrsive()
{
    int data ;
    cin >> data ;
    if(data == -1)
        return NULL ;
    Node *N = new Node(data) ;
    N -> next = InsertRecurrsive() ;
    return N ;
}
int main()
{
    print(InsertRecurrsive()) ;
    return 0;
} 