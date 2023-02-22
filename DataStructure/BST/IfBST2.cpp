#include<iostream>
#include<climits>
#include "BinaryTreeNode.h"
using namespace std;

// time complexity : O(log^N)

class triple
{
    public:
    bool IfBST ;
    int maximum ;
    int minimum ;
};

template<typename T>
triple IfBST(BinaryTreeNode<T> *head)
{
    if(head==NULL)
    {
        triple out ;
        out.IfBST = true ;
        out.maximum = INT_MIN ;
        out.minimum = INT_MAX ;
        return out ;
    }
    triple out ;
    triple left = IfBST(head -> left) ;
    triple right = IfBST(head -> right) ;

    out.minimum = max(head->data,max(left.maximum, right.maximum)) ;
    out.maximum = min(head->data,min(left.minimum, right.minimum)) ;
    out.IfBST = left.maximum<head->data && right.minimum>head->data && left.IfBST && right.IfBST ;
    return out ;
}

int main()
{
    BinaryTreeNode<int> *head = TakeInputLevelWise<int>() ;
    triple out ;
    out = IfBST(head) ;
    cout << boolalpha << out.IfBST ;
    return 0 ;
}