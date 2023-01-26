#include<iostream>
#include<stack> // ⭐ must include this header
using namespace std;
// push(int)
// no return for pop()
// top() have return type
// size() return size 
// empty() return bool
int main()
{
    stack<int> s;
    s.push(34) ;
    s.push(35) ;
    s.push(36) ;
    cout << s.top() << endl ;
    s.pop() ;
    cout << s.size() << endl ;
    s.pop() ;
    cout << boolalpha << s.empty() << endl ;
    return 0;
}