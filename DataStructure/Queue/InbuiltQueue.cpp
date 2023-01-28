#include<iostream>
#include<queue> // ⭐ must include this header
using namespace std;
/*
    push(T element)
    void pop()
    T front()
    int size()
    bool empty()
*/
int main()
{   
    queue<char> Q ;
    Q.push('a') ;
    Q.push('a') ;
    Q.push('d') ;
    Q.push('i') ;
    Q.push('s') ;
    Q.push('h') ;
    cout << boolalpha << "Is Empty: " << Q.empty() << endl ;
    while(Q.size())
    {
        cout << Q.front() ;
        Q.pop() ;
    }
    cout << boolalpha << "\nIs Empty: " << Q.empty() << endl ;
    return 0;
}