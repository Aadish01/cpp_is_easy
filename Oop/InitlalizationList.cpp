// Initialization list is used to initialize const data members
// can't initialize const data member in definition as it will be same for all object
// can't initialize const data member in object creation as already initalized at definition
// must use constructor, but still error occurs as memory already created 
// WE USE INITIALISATION LIST at last 
#include<iostream>
using namespace std;
class Student 
{
    public: 
  
    int age ;
    int const rollNumber ; // const variable
    int &ref ; // referrenct variable

    Student(int age, int r) : rollNumber(r), ref(this -> age)
    {
        this -> age = age ;
        // alse we can do 
        // Student(int age, int r) : rollNumber(r), age(age) { }
        cout << "Object Created...\n" ;
    }
};
int main()
{
    Student O1(10, 21) ;
    return 0;
}