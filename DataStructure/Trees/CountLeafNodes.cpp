#include<iostream>
#include "NewTreeClass.h"
using namespace std;
template<typename T>
int CountLeafNodes(TreeNode<T> *root)
{
    int count = 0 ;
    if(!root->children.size())
        count ++ ;
    for(int i=0; i<root->children.size(); i++)
        count += CountLeafNodes(root->children[i]) ;
    return count ;
}
int main()
{
    TreeNode<int> *root = TakeInputLevelWise<int>() ;
    cout << CountLeafNodes(root) ;
    return 0;
}