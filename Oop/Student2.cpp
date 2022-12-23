#include<iostream>
#include "StudentClassModified.cpp"
using namespace std ;
int main()
{
    char name[] = "abcd" ;
    Student S1(20, name) ;
    S1.display() ; // abcd 20

    Student S2(S1) ;
    S2.name[0] = 'x' ; 
    S1.display() ; 
    S2.display() ;
    // xbcd 20
    // Inbuilt Copy constructor do Shallow Copy
    // Once we make our own COPY CONSTRUCTOR
    // we make everything clear & do DEEP COPY
    // DEEP COPY 
    return 0;
}