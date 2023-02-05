#include<iostream>
using namespace std;
template<typename T>
class BinaryTreeNode
{
    public:
    T data ;
    BinaryTreeNode *left, *right ;

    BinaryTreeNode(T data)
    {
        this -> data = data ;
        left = NULL ;
        right = NULL ;
    }
    void operator=(BinaryTreeNode<T> *root)
    {
        this -> data = root->data ;
        left = root->left ;
        right = root->right ;
    }
    ~BinaryTreeNode()
    {
        delete left ;
        delete right ;
    }
};
template<typename T>
void PrintTree(BinaryTreeNode<T> *root)
{
    if(root==NULL)
        return ;
    cout << root->data<< ":" ;
    if(root->left)
        cout << " L:"<<root->left->data ;
    if(root->right)
        cout << " R:"<< root->right->data;
    cout << endl ;
    PrintTree(root->left) ;
    PrintTree(root->right) ;
}
BinaryTreeNode<int>* TakeInput()
{
    int root_data ;
    cout << "Enter data: " ;
    cin >> root_data ;
    BinaryTreeNode<int> *root = NULL ;
    if(root_data!=-1)
    {    
        root = new BinaryTreeNode<int>(root_data) ;
        root->left = TakeInput() ;
        root->right = TakeInput() ;
    }
    return root ;
}
int main()
{
    // BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1) ;
    // BinaryTreeNode<int> *Node1 = new BinaryTreeNode<int>(2) ;
    // BinaryTreeNode<int> *Node2 = new BinaryTreeNode<int>(3) ;
    // root->left = Node1 ;
    // root->right = Node2 ;
    BinaryTreeNode<int> *root = TakeInput() ;
    PrintTree(root) ;
    return 0;
}
