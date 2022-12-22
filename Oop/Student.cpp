#include<iostream>
using namespace std;
#include "StudentClass.cpp"
int main()
{
    char name[] = "abcd" ;
    Student S1(20, name) ;
    S1.display() ;
    name[3] = 'e' ;
    Student S2(21, name) ;
    S2.display() ;
    S1.display() ; 
// SHALLOW COPYING PROBLEM.......
// error causes different name as passed as char pointer
// abce 20 !!!!!!ERROR!!!!!!!
// SHALLOW COPYING PROBLEM.......
// After DEEP COPYING 
// Object Created...
// abcd 20 !!NO ERROR 😃!!
    return 0; 
}