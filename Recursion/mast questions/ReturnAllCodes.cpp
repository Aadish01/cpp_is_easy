#include<iostream>
using namespace std;
int ReturnAllCodes(string number,string output[])
{
    if(number[0]=='\0')
    {   
        output[0] = '\0' ;
        return 1 ;
    }
    if(number[1]=='\0')
    {
        output[0] = number[0]-'0'+ 'a'-1;
        return 1; 
    }
    int s2 = (number[0]-48)*10 + (number[1]-48)  ;
    int size2 = 0 ;
    if(s2 < 27)
        size2 = ReturnAllCodes(number.substr(2),output) ;
    char initia = 'a' + s2 -1 ;
    for(int i=0 ; i<size2; i++)
    {
        output[i] = initia + output[i] ;
    }
    int size1 = ReturnAllCodes(number.substr(1),output+size2);
    char initial = 'a' + int(number[0])-'0' -1 ;
    for(int i=size2;i<size1+size2;i++)
    {
        output[i] = initial + output[i] ;
    }
    return size1+size2  ;
}
int main()
{
    string output[1000] ;
    char number[] = "1123" ;
    int size = ReturnAllCodes(number, output) ;
    for(int i=0; i<size ;i++)
    {
        cout<< output[i] << " " ;
    }
    return 0;
}