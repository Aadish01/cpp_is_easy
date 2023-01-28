#include<iostream>
#include<queue>
using namespace std;
void ReverseQueue(queue<int> &A)
{
    if(A.empty())
    {
        return ;
    }
    int val = A.front() ;

    A.pop() ;
    ReverseQueue(A) ;
    cout << val << " " ;
    A.push(val) ;
}
int main()
{
    queue<int> Q ;
    int input ;
    cin >> input ;
    while(input != -1)
    {
        Q.push(input) ;
        cin >> input ;
    }
    ReverseQueue(Q) ;
    cout << endl << Q.front() ; 
    return 0;
}