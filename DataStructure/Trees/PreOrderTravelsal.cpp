#include<iostream>
#include "NewTreeClass.h"
using namespace std;
template<typename T>
void PreOrderTraversal(TreeNode<T> *root)
{
    cout << root->data << " " ;
    for(int i=0; i<root->children.size(); i++)
        PreOrderTraversal(root->children[i]) ;
}
int main()
{
    TreeNode<int> *root = TakeInputLevelWise<int>() ;
    PreOrderTraversal(root) ;
    return 0;
}