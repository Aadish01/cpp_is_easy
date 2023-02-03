#include<iostream>
#include<queue>
#include "TreeNodeClass.h"
using namespace std;
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
template<typename T>
void PrintLevelWise(TreeNode<T> *root)
{
    queue<TreeNode<T>*> Q ;
    Q.push(root) ;
    while(!Q.empty())
    {   
        TreeNode<T> *N = Q.front() ;
        Q.pop() ;
        cout << N->data << ": " ;
        for (int i = 0; i < N->children.size(); i++)
        {
            cout << N->children[i]->data << " ";
            Q.push(N->children[i]) ;
        }
        cout<< endl ;
    }
}
int main()
{
    PrintLevelWise(TakeInputLevelWise()) ;
    return 0;
}