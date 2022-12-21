#include<iostream>
using namespace std;
class Student{
    public: // Access Modifiers
    char name[10] ;
};
class Product{
    int id;
    int weight;
    char name[10];
};
int main()
{
    // Static Allocation of Objects
    Student S1 ; //garbage values assigned to members of class
    
    
    // Dynamic Allocation of Objects
    Student *S2 = new Student ;

    cin >> S1.name ;
    cin >> (*S2).name ; // (*).
    cout << S1.name ; 
    cout << S2->name ; // ->

    return 0;
}