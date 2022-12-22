#include<iostream>
using namespace std;
#include "ComplexNumberClass.cpp"
int main()
{
    ComplexNumber O1(2,3), O2(4,5) ;
    int choice ;
    cout << "Enter 1 for addion, 2 for multiplication or else to close: " ;
    cin >> choice ;
    if(choice == 1)
    {
        O1.plus(O2) ;
        O1.print() ;
    }
    else if(choice == 2)
    {
        O1.multiply(O2) ;
        O1.print() ;
    }
    else
    {
        return 0;
    }
}