#include<iostream>
using namespace std;
int main()
{
    int len, width ;
    cout << "enter length: " ;
    cin >> len ;
    cout << "enter witdth: " ;
    cin >> width ;
    int **p = new int*[len] ; // creating array which 
    // stores addresses of other those arrays
    for(int o = 0; o < len ; o++)
    {
        p[o] = new int[width] ; 
    }
    // we can also make 2D arrays of different widths
    // entering values inside array ;
    cout << "array created..." << endl ;
    for(int i = 0; i < len ; i++)
    {
        for(int j = 0; j < width ; j++)
        {    cin >> p[i][j] ; }
    }        
    cout << "values entered..." << endl ;        
    // output from array
    cout << "Output of array is: " << endl ;
    for(int k = 0; k < len ; k++)
    {
        for(int l = 0; l < width ; l++)
        {    cout << p[k][l] << " " ; }
        cout << endl ;
    }
    // deallocation of memory 
    for (int a = 0 ; a < len ; a++)
    {
        delete [] p[a] ; // other arrays deallocation
    }
    delete [] p ; // main array deallocation
    cout << "Memory deleted Successfully !" ;
    return 0;
}