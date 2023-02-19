#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;
//mirror binary tree

template<typename T>
BinaryTreeNode<T>* MirrorBinaryTree(BinaryTreeNode<T> *head)
{
    if(head == NULL)
        return NULL ;
    BinaryTreeNode<T> *N = new BinaryTreeNode<T>(head->data) ;
    N->right = MirrorBinaryTree(head->left) ;
    N->left = MirrorBinaryTree(head->right) ;
    return N ;
}

int main()
{
    BinaryTreeNode<int> *head = TakeInputLevelWise<int>() ;
    PrintLevelWise(MirrorBinaryTree(head)) ;
    return 0;
}