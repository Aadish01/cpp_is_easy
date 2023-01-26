#include<iostream>
#include<stack>
using namespace std;
bool BalancedBrackets(string str)
{
    stack<char> s ;
    while(str.size())
    {
        if(str.at(0)==')' && s.size()==0)
            return false ;
        if(str.at(0)=='(')
            s.push('(') ;
        if(str.at(0)==')')
            s.pop() ;
        str = str.substr(1);
    }
    return s.empty() ;
}
int main()
{
    cout << boolalpha << BalancedBrackets("())") ;
    return 0;
}