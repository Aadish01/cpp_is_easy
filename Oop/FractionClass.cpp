#include<iostream>
using namespace std;
class Fraction{
    int numerator ;
    int denominator ;

    public:
    
    Fraction(int numerator, int denominator)
    {
        cout <<"Object created..." << endl ;
        this->numerator = numerator ;
        this->denominator = denominator ;
    }
    void print()
    {
        cout << "Number is: " << numerator << " / " << denominator << endl ;
    }
    void Simplify()
    {
        int GCD = 1 ;
        int j = min(numerator,denominator) ;
        for(int i = j; i>1; i--)
        {
            if(numerator%i==0&&denominator%i==0)
                GCD = i ;
        }
        numerator /= GCD ;
        denominator /= GCD ;
        cout << "Simplified\n" ;
    }
    void add(Fraction Obj)
    {
        if(this->denominator == Obj.denominator)
        {
            this->numerator += Obj.numerator ;
        }
        else
        {
            this->numerator = this->numerator*Obj.denominator + Obj.numerator*this->denominator ;
            this->denominator = this->denominator * Obj.denominator ;

        }
        cout << "Added\n" ;
        Simplify() ;
    } 
};
int main()
{
    Fraction O1(2,5), O2(3,7) ;
    O1.add(O2) ;
    O1.print() ;
    return 0;
}