#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;

// POSTORDER TRAVERSAL
template <typename T>
void postOrder(BinaryTreeNode<T> *root)
{
    if(root==NULL)
        return;
    postOrder(root->left) ;
    postOrder(root->right) ;
    cout<< root->data << " ";
}

int main()
{
    postOrder(TakeInputLevelWise<int>()) ;
    return 0;
}