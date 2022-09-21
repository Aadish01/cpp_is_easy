#include<iostream>
using namespace std;
int main()
{
    int const i = 10 ; // R 

    int const *p = &i ; // R 
    // only this is possible for const var

    int j = 12 ; // R/W 
    int const *p2 = &j ; // R 

    // ! simple rule 
    // full access -> full/less access
    // less access -> less access only

    // const assure that var/ptr/ref. can't be changed
    int k = 34 ;
    p2 = &k ; // Amazing na !
    // p2 is only saying abt not changing *p2
    // p2 itself can be changed 
    p2 ++ ; // legal 

    int * const p3 = &j ; // change in syntax 
    // now p3 can't be changed 
    // p3 ++ ; // is illegal 
    (*p3)++ ; // but it can be done

    int const m = 34 ;
    int const * const p4 = &m ;
    // here both p4 and *p4 can't be changed

    return 0;
}