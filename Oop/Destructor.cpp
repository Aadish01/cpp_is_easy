// only on destructor
// no argument allowed 

#include<iostream>
using namespace std;
class Student{
    public:
    int rollNumber;
    int age ;

    Student() // constructor #1
    {
        cout << "non-parametereized constructor called." << endl ;  
        rollNumber = 21 ;
        age = 18 ;
    }
    Student(int a, int b) // parameterised constructor #2
    {
        cout << "parameterised constructor called." << endl ;       
        rollNumber = a ;
        age = b ;
    }
    void display()
    {
        cout <<"Age: "<< age << "\tRN: " << rollNumber << "\n";
    }
    ~Student()
    {
        cout << "destructor called." << endl ;
    }
};
int main()
{
    Student S1(10, 1001) ;
    Student S2(20, 2002) ;
    Student *S3 = new Student(30, 3003) ;
    S2 = S1 ;
    *S3 = S1 ;
    S2 = *S3 ;
// PS D:\Cpp> cd "d:\Cpp\cpp_is_easy\Oop\" ; if ($?) { g++ Destructor.cpp -o Destructor } ; if ($?) { .\Destructor }
// parameterised constructor called.
// parameterised constructor called.
// parameterised constructor called.
// destructor called.
// destructor called.

// Adding delete keyword 
    delete S3 ;
// PS D:\Cpp\cpp_is_easy\Oop> cd "d:\Cpp\cpp_is_easy\Oop\" ; if ($?) { g++ Destructor.cpp -o Destructor } ; if ($?) { .\Destructor }
// parameterised constructor called.
// parameterised constructor called.
// parameterised constructor called.
// destructor called.
// destructor called.
// destructor called.

    return 0;
}