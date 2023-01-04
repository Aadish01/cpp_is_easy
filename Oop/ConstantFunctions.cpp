// Constant function are those who don't change data members of object
// void print() const
// {   } 
// Constant objects cannot call any member functions except consant functions
// Hence always remember to mark those functions const who doesn't alter data members

#include<iostream>
using namespace std;
class Fraction{
    int numerator ;
    int denominator ;

    public:
    int getnum() const
    {
        return numerator ;
    }
    int getden() const
    {
        return denominator ;
    }
    void setnum(int numerator)
    {
        this -> numerator = numerator ;
    }
    void setden(int denominator)
    {
        this -> denominator = denominator ;
    }
    Fraction()
    {

    }
    Fraction(int numerator, int denominator)
    {
        cout <<"Object created..." << endl ;
        this->numerator = numerator ;
        this->denominator = denominator ;
    }
    void print() const
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
    void Add(Fraction const &Obj)
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
    const Fraction O1 ;
    cout << "numerator " << O1.getnum() ;
    cout << "\ndenominator " << O1.getden() ;
    return 0;
}