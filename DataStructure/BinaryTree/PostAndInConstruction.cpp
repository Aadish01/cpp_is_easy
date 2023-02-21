#include<iostream>
#include "BinaryTreeNode.h"
using namespace std;
BinaryTreeNode<int>* construct(int postS, int postE, int inS, int inE, int *post, int *in)
{
    if(inS>inE)
        return NULL ;
    BinaryTreeNode<int> *head = new BinaryTreeNode<int>(post[postE]) ;
    int index ;
    for(int i=inS ; i<=inE; i++)
    { 
        if(in[i]==post[postE])
            index=i ;
    }
    int lenght = index - inS ;
    head ->left = construct(postS, postS+lenght-1, inS, index-1, post, in) ;
    head ->right = construct(postS+lenght, postE-1, index+1, inE, post, in) ;
    return head ;
} 
int main()
{
    int post[] = {4, 5, 2, 6, 7, 3, 1} ;
    int in[] = {4,2,5,1,6,3,7} ;
    BinaryTreeNode<int> *head = construct(0,6,0,6,post,in);
    PrintLevelWise(head) ;
    return 0;
}