#include<iostream> // preprocessor directives
#define PI 3.14 // prepocessor declaration ! very helpful
// no extra variable created, no memory created, value can't be changed
using namespace std;
char str[] = "lol" ; // global variable 
// it can be accessed anywhere in the program
// !! very bad practise never use it 
// !! very risky ignore it as much you can
void fun()
{
    str[2] = 'e' ;
}
int main()
{
    int r ;
    cin >> r ;
    cout << PI*r*r << "\t" << str << endl ;
    fun() ;
    cout << str << endl ;
    return 0;
}