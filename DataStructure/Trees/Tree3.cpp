#include<iostream>
#include<queue>
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
TreeNode<int>* TakeInputLevelWise()
{
    queue<TreeNode<int>*> Q ;
    int rootNode ;
    cout << "Enter root Node: " ;
    cin >> rootNode ;
    TreeNode<int> *root = new TreeNode<int>(rootNode) ;
    Q.push(root) ;
    while(!Q.empty())
    {
        TreeNode<int> *N = Q.front() ;
        Q.pop() ;
        int Child_data ;
        cout << "Enter children of " << N->data << " :\n" ;
        cin >> Child_data ;
        while(Child_data != -1)
        {
            TreeNode<int> *CN = new TreeNode<int>(Child_data) ;
            N->children.push_back(CN) ;
            Q.push(CN) ;
            cin >> Child_data ;
        }
    }
    return root ;
}
int main()
{
    printTree(TakeInputLevelWise()) ;
    return 0;
}