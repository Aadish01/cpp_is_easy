#include<iostream>
#include "NewTreeClass.h"
using namespace std;
int SumOfAllNodes(TreeNode<int> *root)
{
    int sum = root->data ;
    for(int i = 0; i<root->children.size(); i++)
        sum+=SumOfAllNodes(root->children[i]) ;
    return sum ;
}
int main()
{
    TreeNode<int> *root = TakeInputLevelWise<int>() ;
    cout << "Sum of all Nodes: "<<SumOfAllNodes(root) ;
    return 0;
}