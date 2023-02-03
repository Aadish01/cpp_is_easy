#include<iostream>
#include "NewTreeClass.h"
using namespace std;
int LargestNode(TreeNode<int> *root)
{
    int largest = root->data ;
    for(int i = 0; i<root->children.size(); i++)
    {
        int intermediate = LargestNode(root->children[i]) ;   
        if(largest < intermediate)
            largest = intermediate ;
    }
    return largest ;
}
int main()
{
    TreeNode<int> *root = TakeInputLevelWise<int>() ;
    cout << "Largest of all Nodes: "<<LargestNode(root) ;
    return 0;
}