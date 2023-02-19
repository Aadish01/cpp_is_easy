#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;

// PREORDER TRAVERSAL
template <typename T>
void preorder(BinaryTreeNode<T> *root)
{
    if(root==NULL)
        return;
    cout<< root->data << " ";
    preorder(root->left) ;
    preorder(root->right) ;
}

int main()
{
    preorder(TakeInputLevelWise<int>()) ;
    return 0;
}