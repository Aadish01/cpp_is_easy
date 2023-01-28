#include<iostream>
#include<stack>
using namespace std;
void Transfer(stack<int> &A, stack<int> &B)
{
    if(!A.empty())
    {
        B.push(A.top()) ;
        A.pop() ;
        Transfer(A, B) ;
    }
    return ;
}
void ReverseStack(stack<int> &A, stack<int> &B)
{
    if(A.size()<1)
    {
        return ;
    }
    int val = A.top() ;
    A.pop() ;
    ReverseStack(A, B) ;
    Transfer(A, B) ;
    A.push(val) ;
    cout << val << " ";
    Transfer(B,A) ;
}
int main()
{
    int input ;
    cin >> input ;
    stack<int> P , Q ;
    while(input != -1)
    {
        P.push(input) ;
        cin >> input ;
    }
    ReverseStack(P, Q) ;
    cout << endl << P.top() ;
    return 0;
}