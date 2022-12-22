#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    int age ;
    char *name ;

    public:

    Student(int age, char *name)
    {
        this -> age = age ;
        // DEEP COPYING to avoid SHALLOW COPYING
        this -> name = new char[strlen(name)+1] ;
        strcpy(this -> name, name) ;
        cout << "Object Created...\n" ;
    }
    void display()
    {
        cout << name << " " << age << endl ;
    }
};
