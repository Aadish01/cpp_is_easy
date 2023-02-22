#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;

template<typename T>
BinaryTreeNode<T>* search(BinaryTreeNode<T> *head, T data)
{
    if(head == NULL)
        return head ;
    if(data == head->data)
        return head ;
    if(data>head->data)
        return search(head->right, data) ;
    else
        return search(head->left, data) ;
}

int main()
{
    BinaryTreeNode<int> *head = TakeInputLevelWise<int>() ;
    BinaryTreeNode<int> *return_value = search(head, 3) ;
    cout << return_value->data << " ";
    return 0;
}