#include<iostream>
#include<queue>
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
BinaryTreeNode<T>* TakeInputLevelWise()
{
    
    T root_data ;
    cout << "Enter data: " ;
    cin >> root_data ;
    BinaryTreeNode<T> *root = new BinaryTreeNode<int>(root_data) ;
    queue<BinaryTreeNode<T>*> Nodes ;
    Nodes.push(root) ;
    while(!Nodes.empty())
    {
        BinaryTreeNode<T> *N = Nodes.front() ;
        Nodes.pop() ;
        cout << "Enter both Nodes of "<< N->data << " : ";
        cin >> root_data ;
        N->left = NULL ;
        if(root_data!=-1)
        {
            N->left = new BinaryTreeNode<T>(root_data) ;
            Nodes.push(N->left) ;
        }
        N->right = NULL ;
        cin >> root_data ;
        if(root_data!=-1)
        {
            N->right = new BinaryTreeNode<T>(root_data) ;
            Nodes.push(N->right) ;
        }
    }      
    return root ;
}
template<typename T>
void PrintLevelWise(BinaryTreeNode<T> *root)
{
    queue<BinaryTreeNode<T>*> Nodes ;
    Nodes.push(root) ;
    while(!Nodes.empty())
    {
        BinaryTreeNode<T> *N = Nodes.front() ;
        cout << N->data << " :" ;
        Nodes.pop() ;
        if(N->left)
        {
            cout << " L:" << N->left->data ;
            Nodes.push(N->left) ;
        }
        if(N->right)
        {
            cout << " R:" << N->right->data ;
            Nodes.push(N->right) ;
        }
        cout << endl ;
    }      
}