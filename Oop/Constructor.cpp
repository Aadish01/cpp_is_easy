// constructor in a function called when objects are created 
// if not defined by user, inbuilt constructor is called
#include<iostream>
using namespace std;
class Student{
    public:
    int rollNumber;
    int age ;

    Student() // constructor #1
    {
        rollNumber = 21 ;
        age = 18 ;
    }
    Student(int a, int b) // parameterised constructor #2
    {
        rollNumber = a ;
        age = b ;
    }

    void display()
    {
        cout <<"Age: "<< age << "\nRN: " << rollNumber << "\n";
    }
};
int main()
{
    Student *S1 = new Student ; // #1 called
    S1 -> display() ;
    Student S2(2, 5) ; // #2 called
    S2.display() ;
    return 0 ;
}