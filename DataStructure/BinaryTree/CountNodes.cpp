#include<iostream>
#include<queue>
#include "BinaryTreeNode.h"
using namespace std;

template<typename T>
int CountNodes(BinaryTreeNode<T> *root)
{
    if(root==NULL)  
        return 0 ;
    return CountNodes(root->left) + CountNodes(root->right) + 1 ;
}
int main()
{
    cout << CountNodes(TakeInputLevelWise<int>()) ;
    return 0;
}