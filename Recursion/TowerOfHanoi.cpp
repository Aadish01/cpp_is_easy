#include<iostream>
using namespace std;
void TowerOfHanoi(int num, char a, char b, char c)
{
    if(num==1)
    {
        cout << a << " -> " << b << endl ;
        return ;
    }
    TowerOfHanoi(num-1,a,c,b) ;
    cout << a << " -> " << b << endl ;
    TowerOfHanoi(num-1,b,c,a) ;
}
int main()
{
    int num ;
    cout << "enter number: " ;
    cin >> num ;
    TowerOfHanoi(num,'a','b','c') ;
    return 0;
}