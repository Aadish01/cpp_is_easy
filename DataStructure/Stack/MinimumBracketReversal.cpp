#include<iostream>
#include<stack>
using namespace std;
int MinBracketReversal(string Expression)
{
    if(Expression.size()%2==1)
        return -1 ;
    stack<char> StackOfExpression ;
    int counter = 0 ;
    while(!Expression.empty()) 
    {
        if(Expression.at(0)=='{')
        {
            StackOfExpression.push('{') ;
            Expression = Expression.substr(1) ;
        }
        else
        {
            if(!StackOfExpression.empty())
                StackOfExpression.pop() ;
            else
            {
                StackOfExpression.push('{') ;
                counter ++ ;
            }
            Expression = Expression.substr(1) ;
        }
    }
    while(!StackOfExpression.empty())
    {
        char C1 = StackOfExpression.top() ;
        StackOfExpression.pop() ;
        char C2 = StackOfExpression.top() ;
        StackOfExpression.pop() ;
        if(C1 == C2)
            counter++ ;
    }
    return counter ;
}
int main()
{
    cout << MinBracketReversal("{}}{{{}{") ;
    return 0;
}