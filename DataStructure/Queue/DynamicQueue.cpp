#include<iostream>
#include "QueueUsingLL.h"
using namespace std;
int main()
{
    QueueUsingLL<int> Q ;
    Q.Enqueue(34) ;
    Q.Enqueue(44) ;
    Q.Enqueue(54) ;
    Q.Enqueue(64) ;
    cout << boolalpha << Q.IsEmpty() << endl ;
    cout << Q.Dequeue() << endl ;
    cout << Q.Dequeue() << endl ;
    cout << Q.Dequeue() << endl ;
    cout << Q.Dequeue() << endl ;
    cout << boolalpha << Q.IsEmpty() << endl ;
    cout << Q.Dequeue() << endl ;
    return 0;
}