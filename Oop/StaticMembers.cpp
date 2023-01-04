// Static members are those whose value is saved in class not 
// defined seperately for every objects 
// 🌟 Static members can be accessed by :  className::MemberFunction
// 🌟 We use Scope Resolution Operator (::)
// 🌟 We have to initlaize static member outside the class

// 🌈 Static functions are also possible
// same as staic data members
// 🏓 these function don't alter object based members 
// 🏓 can only access static data members

// this keyword/pointer can't access static members/funstions
#include<iostream>
using namespace std;
class Student{
    // ⭐
    static int totalStudents;
    public: 

    int rollNumber;
    int age;

    Student()
    {
        totalStudents++ ;
    }
    // static function
    static int GetTotalStudents() 
    {
        return totalStudents ;
    }
};
int Student :: totalStudents = 0 ;
int main()
{
    Student S1 ;
    cout << S1.GetTotalStudents() ; // works but bad practise
    // S1.totalStudents = 100 ;
    Student S2 ;
    cout << endl << Student :: GetTotalStudents() ; // works and good practise
    return 0;
}