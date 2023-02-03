#include<iostream>
#include "NewTreeClass.h"
using namespace std;
int HeightOfTree(TreeNode<int> *root)
{
    int height = 0 ;
    for(int i = 0; i<root->children.size(); i++)
    {
        int intemediate = HeightOfTree(root->children[i]) ;   
        if(height<intemediate)
            height = intemediate ;
    }
    return height+1 ;
}
int main()
{
    TreeNode<int> *root = TakeInputLevelWise<int>() ;
    cout << "Height of Tree: "<<HeightOfTree(root) ;
    return 0;
}  