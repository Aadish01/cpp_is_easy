#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;

// INORDER TRAVERSAL
template <typename T>
void inorder(BinaryTreeNode<T> *root)
{
    if(root==NULL)
        return;
    inorder(root->left) ;
    cout<< root->data << " ";
    inorder(root->right) ;
}

int main()
{
    inorder(TakeInputLevelWise<int>()) ;
    return 0;
}