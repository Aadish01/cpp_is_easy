#include<iostream>
using namespace std;
void RemoveDuplicates(char *Str)
{
    if(Str[0]=='\0')
        return;
    if(Str[0]==Str[1])
    {
        int i = 1 ;
        for(;Str[i] != '\0'; i++)
            Str[i-1] = Str[i] ;
        Str[i-1] = Str[i] ;
        RemoveDuplicates(Str) ;
    }
    RemoveDuplicates(Str+1) ;
}
int main()
{
    char S[1000] ;
    cout << "Enter a string(0< S <1000): " ;
    cin>> S ;
    RemoveDuplicates(S) ;
    cout << S ;
    return 0;
}