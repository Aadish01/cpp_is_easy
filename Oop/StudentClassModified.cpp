// Here we made data members public
// And we made Our own Copy constructor 

#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    public:
    
    int age ;
    char *name ;

    Student(int age, char *name)
    {
        this -> age = age ;
        // DEEP COPYING to avoid SHALLOW COPYING
        this -> name = new char[strlen(name)+1] ;
        strcpy(this -> name, name) ;
        cout << "Object Created...\n" ;
    }
    Student(Student const &Obj) // & is include to avoid infinite loop 
    // const keyword ensures that modification on Obj is not possible
    // !!!! const referrence !!!!
    {
        this -> age = Obj.age ;
        // this -> name = Obj.name ; // Shallow copy
        this -> name = new char[strlen(Obj.name)+1] ;
        strcpy(this -> name, Obj.name) ; // Deep copy
        cout << "Copy Constructor Called...\n" ;
    }
    void display()
    {
        cout << name << " " << age << endl ;
    }
};
