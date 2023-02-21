#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;

// Time complexity: O(n*TreeHeight) which is quite high 
// as we are accessing height(n) and also breaking problem in 2 halfs 
// for imbalanced tree it would go upto O(n^2)

template<typename T>
int HeightOfBinaryTree(BinaryTreeNode<T> *head)
{
    if(head==NULL)
        return 0 ;
    return 1 + (HeightOfBinaryTree(head->left) > HeightOfBinaryTree(head->right) ? HeightOfBinaryTree(head->left):HeightOfBinaryTree(head->right)) ;
}
int mx(int a,int b, int c)
{
    if(a>b)
    {
        if(a>c)
            return a ;
        else
            return c ;
    }
    else
    {
        if(b>c)
            return b ;
        else
            return c ;
    }

}
int DiameterOfTree(BinaryTreeNode<int> *head)
{
    if(head==NULL)
        return 0 ;
    int ls = HeightOfBinaryTree(head-> left) ;
    int rs = HeightOfBinaryTree(head-> right) ;
    int max = ls + rs ;
    int maximuml = DiameterOfTree(head->left);
    int maximumr = DiameterOfTree(head->right);
    return mx(max, maximuml, maximumr) ;
}

int main()
{
    BinaryTreeNode<int> *head = TakeInputLevelWise<int>() ;
    cout << DiameterOfTree(head) ;
    return 0;
}