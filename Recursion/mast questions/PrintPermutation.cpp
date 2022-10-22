#include<iostream>
using namespace std;
string trim(string array, int index)
{
    for(int i=index; i <= array.length(); i++)
    {
        array[i] = array[i+1] ;
    }
    array.resize(array.size()-1) ;
    return array ;
}
int permutation(string array, string output[])
{
    if(array[0]=='\0')
    {
        output[0] = '\0';
        return 1 ;
    }
    int size = 0 ;
    for(int i=0; i<array.length(); i++)
    {
        char temp = array[i] ;
        int size1 = size ;
        size1 = permutation(trim(array,i),output+size1) ;
        for(int j=size;j<size+size1; j++)
        {
            output[j] = temp + output[j] ;
        }
        size += size1 ;
    }
    return size ; 
}
int main()
{
    char str[] = "cbad" ;
    string *output = new string[1000] ;
    int size = permutation(str,output) ;
    for(int i = 0; i<size ;i++)
    {cout<<output[i]<< " " ;}
    cout << size ;
    return 0;
}