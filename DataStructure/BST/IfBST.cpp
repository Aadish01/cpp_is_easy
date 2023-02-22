#include<iostream>
#include<climits>
#include "BinaryTreeNode.h"
using namespace std;

// Time Complexity : O(N*log^N)

template<typename T>
int minimum(BinaryTreeNode<T> *head)
{
    if(head==NULL)
        return INT_MAX ;    
    return (min(head->data,min(minimum(head->left), minimum(head->right)))) ;
}

template<typename T>
int maximum(BinaryTreeNode<T> *head)
{
    if(head==NULL)
        return INT_MIN ;    
    return (max(head->data,max(maximum(head->left), maximum(head->right)))) ;
}

template<typename T>
bool IfBST(BinaryTreeNode<T> *head)
{
    if(head==NULL)
        return true ;
    int lmax = maximum(head->left) ;
    int rmin = minimum(head->right) ;
    return (lmax<head->data && rmin>head->data && IfBST(head->left) && IfBST(head->right)) ;
}

int main()
{
    BinaryTreeNode<int> *head = TakeInputLevelWise<int>() ;
    cout << boolalpha << IfBST(head) ;
    return 0;
}