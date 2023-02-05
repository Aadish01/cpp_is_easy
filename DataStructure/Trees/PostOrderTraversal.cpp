#include<iostream>
#include "NewTreeClass.h"
using namespace std;
template<typename T>
void PostOrderTraversal(TreeNode<T> *root)
{
    for(int i=0; i<root->children.size(); i++)
        PostOrderTraversal(root->children[i]) ;
    cout << root->data << " " ;
}
int main()
{
    TreeNode<int> *root = TakeInputLevelWise<int>() ;
    PostOrderTraversal(root) ;
    return 0;
}