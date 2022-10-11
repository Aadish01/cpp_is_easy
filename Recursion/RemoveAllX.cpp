#include<iostream>
using namespace std;
void RemoveX(char *str)
{
    if(str[0]=='\0')
        return ;
    if(str[0]!='x')
        RemoveX(str+1) ;
    else
    {   
        int i=1 ;
        for(; str[i] != '\0'; ++i)
        {
            str[i-1] = str[i] ;
        }
        str[i-1] = str[i] ;
        RemoveX(str) ;
    }
}
int main()
{
    char strr[100] ;
    cout << "Enter a string: " ;
    cin >> strr ;
    RemoveX(strr) ;
    cout << strr ; 
    return 0;
}