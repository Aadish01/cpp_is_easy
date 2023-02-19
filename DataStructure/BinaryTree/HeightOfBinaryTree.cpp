#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;
//height of binary tree
template<typename T>
int HeightOfBinaryTree(BinaryTreeNode<T> *head)
{
    if(head==NULL)
        return 0 ;
    return 1 + (HeightOfBinaryTree(head->left) > HeightOfBinaryTree(head->right) ? HeightOfBinaryTree(head->left):HeightOfBinaryTree(head->right)) ;
}
int main()
{
    cout << HeightOfBinaryTree(TakeInputLevelWise<int>()) ;
    return 0;
}