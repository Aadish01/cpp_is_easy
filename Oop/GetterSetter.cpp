#include<iostream>
using namespace std;
// getter/setter are imp to ensure 
// safety of changes in private members
class Student{
    public:
    int rollNumber;

    public:
    int age ;

    public:
    void display()
    {
        cout <<"Age: "<< getAge() << "\nRN: " << rollNumber ;
    }
    void setAge(int num) // setter
    {
        age = num ;
    }
    int getAge() // getter 
    {
        return age ; 
    }
};
int main()
{
    Student *S1 = new Student ;
    S1->rollNumber = 21 ;
    S1->setAge(18) ;
    S1->display() ;

    return 0;
}