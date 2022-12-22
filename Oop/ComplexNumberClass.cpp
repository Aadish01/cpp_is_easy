#include<iostream>
using namespace std;
class ComplexNumber{
    int real, imaginary ;
    
    public: 
    ComplexNumber(int real, int imaginary)
    {
        this -> real = real ;
        this -> imaginary = imaginary ;
        cout << "Object Created...\n" ;
    }
    void print()
    {
        cout << "Number is: "<< real << " + "<< imaginary << "i\n" ;
    }
    int ret_real()
    {
        return real ;
    }
    int ret_imaginary()
    {
        return imaginary ;
    }
    void plus(ComplexNumber &Object)
    {
        real += Object.ret_real() ;
        imaginary += Object.ret_imaginary() ;
        cout << "Added...\n" ;
    }
    void multiply(ComplexNumber &Object)
    {
        int temp = real*Object.ret_real() + imaginary*Object.ret_imaginary() ;
        imaginary = imaginary*Object.ret_real() + (real*Object.ret_imaginary()) ;
        real = temp ;
        cout << "Multiplied...\n" ;
    }
};
