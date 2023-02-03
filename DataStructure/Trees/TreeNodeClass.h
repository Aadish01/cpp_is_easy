#include<iostream>
#include<vector>
using namespace std;
template <typename T>
class TreeNode
{
    public:

    T data ;
    vector<TreeNode*> children ; // don't need to mention template here
    // i.e. TreeNode<T>* but it stil works as child & parent will be same

    TreeNode(T data)
    {
        this -> data = data ;
    }
};  