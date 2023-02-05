#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;
template<typename T>
void PrintTree(BinaryTreeNode<T> *root)
{
    if(root==NULL)
        return ;
    cout << root->data<< ":" ;
    if(root->left)
        cout << " L:"<<root->left->data ;
    if(root->right)
        cout << " R:"<< root->right->data;
    cout << endl ;
    PrintTree(root->left) ;
    PrintTree(root->right) ;
}
int main()
{
    PrintTree(TakeInputLevelWise<int>()) ;
    return 0;
}