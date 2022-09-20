#include<iostream>
using namespace std;
int main()
{
    int j = 65 ;
    char ch = j ; // implicit typecasting (comp. is doing for us)
    int *ptr_int = &j ;
    char *ptr_ch = (char *)&j ; // explicit typecasting (we are doing it externally)
    cout << "integer: " << *ptr_int << endl ; 
    cout << "char: " << *ptr_ch << endl ; // Litte Endian System LSB is stored first in cas of int
    cout << "other bytes: " << *(ptr_ch + 1) << endl ; // lsb stored firstly
    cout << "other bytes: " << *(ptr_ch + 2) << endl ; // lsb stored firstly
    cout << "other bytes: " << *(ptr_ch + 3) << endl ; // lsb stored firstly
    return 0;
}