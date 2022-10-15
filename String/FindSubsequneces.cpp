#include<iostream>
using namespace std;
int subsequences(string input, string *output)
{
    if(input.size()==0)
    {    
        output[0] = "" ;
        return 1 ;
    }
    int size = subsequences(input.substr(1), output) ;
    for(int i = 0; i<size ;i++)
    {
        output[size+i] = input[0] + output[i] ;
    }
    return size*2 ;
}
int main()
{
    string input ;
    cout << "Enter String: " ;
    cin >> input ;
    string *output = new string[1000] ;
    int size = subsequences(input, output) ;
    for(int i = 0 ; i<size ; i++ )
    {
        cout << output[i] << endl ;
    }
    cout<< size ;
    return 0;
}