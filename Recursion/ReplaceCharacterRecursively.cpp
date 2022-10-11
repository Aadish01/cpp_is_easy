#include<iostream>
using namespace std;
void Replacer(char *str, char c1, char c2)
{
    if(str[0]=='\0')
        return ;
    
    if(str[0]==c1)
    str[0] = c2 ;
    Replacer(str+1, c1, c2) ;
}
int main()
{
    char strr[] = "lava" ;
    Replacer(strr, 'a', 'b') ;
    cout << strr ;
    return 0;
}