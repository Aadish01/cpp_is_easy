#include<iostream>
#include<stack>
using namespace std;
bool RedundantBrackets(stack<char> &Stack)
{
    int counter = 0 ;
    if(Stack.top()==')')
    {
        Stack.pop() ;
    }
    while(Stack.top()!='(')
    {
        if(Stack.top()==')')
            {       
                if(RedundantBrackets(Stack))
                    return true ;
            }
        else
            Stack.pop() ;
        counter++ ;
        if(Stack.empty())
            return !(counter>2) ;
    }
    if(Stack.top()=='(')
    {
        Stack.pop() ;
    }
    return !(counter>2) ;
}
int main()
{
    string expression ;
    cin >> expression ;
    stack<char> Stack ;
    while(expression.size())
    {
        Stack.push(expression.at(0)) ;
        expression = expression.substr(1) ;
    }
    cout << boolalpha << RedundantBrackets(Stack) ;
    return 0;
}