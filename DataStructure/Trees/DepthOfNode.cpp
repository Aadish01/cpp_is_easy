#include<iostream>
#include "NewTreeClass.h"
using namespace std;
void NodeAtkDepth(TreeNode<int> *root, int k)
{
    for(int i = 0; i<root->children.size(); i++)
    {
        if(k==0)
            break ;
        if(k>=1)
            NodeAtkDepth(root->children[i], k-1) ;   
        if(k-1==0)
            cout << root->children[i]->data << " ";
    }
}
int main()
{
    TreeNode<int> *root = TakeInputLevelWise<int>() ;
    NodeAtkDepth(root, 2) ;
    return 0;
}  