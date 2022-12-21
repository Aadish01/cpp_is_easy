#include<iostream>
using namespace std;
/*  
    1. Default Consturctor
    2. Copy Constructor
        Student S2(S1) 
    3. Copy Assignment Operator ( = )
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
    // #2 A
    Student S1(0,1) ;
    Student S2(S1) ;
    cout << "S1 : " ;
    S1.display() ;
    cout << "S2 : " ;
    S2.display() ;

    // #2 B
    Student *S3 = new Student(2,3) ; 
    Student S4(*S3) ; // dereferencing
    cout << "S3 : " ;
    S3 -> display() ;
    cout << "S4 : " ;
    S4.display() ;

    // #3 A
    Student S5(10,1001) ;
    Student S6(20,2002) ;
    S6 = S5 ; // copy assignment operator
    cout << "S5 : " ;
    S5.display() ;
    cout << "S6 : " ;
    S6.display() ;

    // #3 B
    Student *S7 = new Student(30,3003) ;
    Student S8(40, 4004) ;
    S8 = *S7 ;
    cout << "S7 : " ;
    S7 -> display() ;
    cout << "S8 : " ;
    S8.display() ;
    
    return 0;
}