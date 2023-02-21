#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;

// time complexity = O(n)
// as we are using pair and returning height and max(sub height)

template<typename T>
pair<int, int> HeightOfBinaryTree(BinaryTreeNode<T> *head)
{
    if(head==NULL)
    {
        pair<int, int> p;
        p.first = 0 ;
        p.second = 0 ;
        return p ;
    }
    pair<int, int> p1 = HeightOfBinaryTree(head->left) ;
    pair<int, int> p2 = HeightOfBinaryTree(head->right) ;
    pair<int, int> p ;
    p.first = 1+(p1.first>p2.first?p1.first:p2.first) ;
    p.second = (p1.first+p2.first) ;
    return p ;
}

int main()
{
    BinaryTreeNode<int> *head = TakeInputLevelWise<int>() ;
    pair<int , int> p = HeightOfBinaryTree(head) ;
    cout << (p.first>p.second?p.first:p.second) ;
    return 0;
}