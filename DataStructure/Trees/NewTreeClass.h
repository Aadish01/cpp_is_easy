#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template <typename T>
class TreeNode
{
    public:

    T data ;
    vector<TreeNode*> children ;
    TreeNode(T data)
    {
        this -> data = data ;
    }
};  
template<typename T>
TreeNode<T>* TakeInputLevelWise()
{
    queue<TreeNode<T>*> Q ;
    int rootNode ;
    cout << "Enter root Node: " ;
    cin >> rootNode ;
    TreeNode<T> *root = new TreeNode<T>(rootNode) ;
    Q.push(root) ;
    while(!Q.empty())
    {
        TreeNode<T> *N = Q.front() ;
        Q.pop() ;
        int Child_data ;
        cout << "Enter children of " << N->data << " :\n" ;
        cin >> Child_data ;
        while(Child_data != -1)
        {
            TreeNode<T> *CN = new TreeNode<T>(Child_data) ;
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
template<typename T>
int CountNodes(TreeNode<T> *root)
{
    int counter = 1 ;
    for(int i = 0; i<root->children.size(); i++)
    {
        counter+=CountNodes(root->children[i]) ;
    }
    return counter ;
}