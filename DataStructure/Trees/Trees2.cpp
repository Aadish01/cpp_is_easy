#include<iostream>
#include "TreeNodeClass.h"
using namespace std;
void printTree(TreeNode<int> *root)
{
    if(root==NULL)
        return ;
    // 💀 No base case here
    cout << root->data << ": ";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << " " ;
    }
    cout << endl ;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);  
    }
}
TreeNode<int> *takeInput()
{
    int rootData ;
    cout << "Enter data: " ;
    cin >> rootData ;
    TreeNode<int> *root = new TreeNode<int>(rootData) ;
    int NoOfChild ;
    cout << "Enter No. of child: " ;
    cin >> NoOfChild ;
    while(NoOfChild)
    {
        root->children.push_back(takeInput()) ;
        NoOfChild-- ;
    }
    return root ;
}
int main()
{
    TreeNode<int> *root = takeInput() ;
    printTree(root) ;
    return 0;
    // TODO delete the tree
}