// we can use arr+1 for any array whether char or int or any
#include<iostream>
using namespace std;
int length(char *p)
{
    if(p[0]=='\0')
    {
        return 0 ;
    }
    return length(p+1) + 1 ;
}
int main()
{
    char str[100] ;
    cout << "Enter a string: " ;
    cin >> str ;

    cout << length(str) ;
    return 0;
}