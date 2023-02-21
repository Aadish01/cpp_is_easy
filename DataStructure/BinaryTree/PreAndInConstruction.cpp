#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;
BinaryTreeNode<int>* construct(int preS, int preE, int inS, int inE, int *pre, int *in)
{
    if(inS>inE)
        return NULL ;
    BinaryTreeNode<int> *head = new BinaryTreeNode<int>(pre[preS]) ;
    int index ;
    for(int i=inS ; i<=inE; i++)
    { 
        if(in[i]==pre[preS])
            index=i ;
    }
    int lenght = index - inS ;
    head->left = construct(preS+1, preS+lenght, inS, index-1, pre, in) ;
    head->right = construct(preS+lenght+1, preE, index+1, inE, pre, in) ;
    return head ;
} 
int main()
{
    int pre[] = {1,2,4,5,3,6,7} ;
    int in[] = {4,2,5,1,6,3,7} ;
    BinaryTreeNode<int> *head = construct(0,6,0,6,pre,in);
    PrintLevelWise(head) ;
    return 0;
}