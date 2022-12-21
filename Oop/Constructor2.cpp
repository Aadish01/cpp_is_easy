#include<iostream>
using namespace std;
/*  
    1. Default Consturctor
    2. Copy Constructor
        Student S2(S1) 
    3. Parameterized Constructor
*/
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
        cout <<"Age: "<< age << "\tRN: " << rollNumber << "\n";
    }
};
int main()
{
    Student S1(0,1) ;
    Student S2(S1) ;
    cout << "S1 : " ;
    S1.display() ;
    cout << "S2 : " ;
    S2.display() ;
    Student *S3 = new Student(2,3) ;
    Student S4(*S3) ;
    cout << "S3 : " ;
    S3 -> display() ;
    cout << "S4 : " ;
    S4.display() ;
    return 0;
}