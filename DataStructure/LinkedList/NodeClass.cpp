#include<iostream>
using namespace std;
class Node
{
    public:

    int data ;
    Node *next ;

    Node(int data)
    {
        this -> data = data ;
        next = NULL ;
    }
};
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head -> data << " " ;
        head = head -> next ;
    }
    cout << endl ;
}