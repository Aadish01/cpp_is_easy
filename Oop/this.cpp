#include<iostream>
using namespace std;
class Student{
    public:
    int rollNumber;
    int age ;

    Student() // constructor #1
    {
        cout << "Constructor 1 called\n" ;
        rollNumber = 21 ;
        age = 18 ;
    }

    Student(int rollNumber, int age) // parameterised constructor #2
    {
        cout << "constructor 2 called\n" ;
        this -> rollNumber = rollNumber ;
        this -> age = age ;
    }

    void display()
    {
        cout << "rollNumber: " << rollNumber << " age: " << age << endl ;
    }
    void ret_this()
    {
        cout << "Value of this: " << this << endl ;
    }
};
int main()
{
    // Student *S1 = new Student ;
    // cout << "Address of S1: " << S1 << endl ;
    // S1 -> ret_this() ;
    cout << "input values are: " << 5 << "  " << 34 << endl ;
    Student *S2 = new Student(5, 34) ;
    S2 -> display() ;
    return 0;
}