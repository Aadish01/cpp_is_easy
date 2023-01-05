#include<iostream>
using namespace std;
class Fraction{
    int numerator ;
    int denominator ;

    public:
    Fraction()
    {
    }
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
    // Operator Overloading
    // same as add function
    // where f1, f2, f3 are objects of Fraction class 
    // f3 = f1 + f2
    // this = f1
    // f2 is argument 
    // same as add function
    Fraction operator+(Fraction const &Obj) const 
    {
        Fraction temp ;
        if(this->denominator == Obj.denominator)
        {
            temp.numerator += Obj.numerator ;
            temp.denominator = Obj.denominator ;
        }
        else
        {
            temp.numerator = this->numerator*Obj.denominator + Obj.numerator*this->denominator ;
            temp.denominator = this->denominator * Obj.denominator ;

        }
        cout << "Added\n" ;
        temp.Simplify() ;
        return temp ;
    }
    Fraction operator*(Fraction const &obj) const 
    {
        Fraction *temp = new Fraction ;
        temp -> numerator = this -> numerator * obj.numerator ;
        temp -> denominator = this -> denominator * obj.denominator ;
        cout << "Multiplied\n" ;
        temp -> Simplify() ;
        return *temp ;
    }
    bool operator==(Fraction const &obj) const
    {
        if(this -> numerator == obj.numerator)
            if(this -> denominator == obj.denominator)
                return true ;
        return false ;
    }
    // pre increment opeator
    Fraction& operator++()
    {
        this -> numerator += this -> denominator ;
        Simplify() ;
        return *this ;
    }

    // post increment operator
    Fraction operator++(int)  // format represents the post increment operator
    {
        Fraction *old = new Fraction(numerator, denominator) ;
        this -> numerator += this -> denominator ;
        old->Simplify() ;
        Simplify() ;
        // ⛔ no nesting allowed for integer similarly nesting not done for postfix
        return *old ;
    }

    // sum and assign
    Fraction& operator+=(Fraction const &obj) // Fraction is returned by refference
    {
        add(obj) ;
        return *this ;
    }
};
int main()
{
    Fraction F1(3, 5) ;
    Fraction F2 = (++F1)++ ;
    Fraction F3(4,7) ;
    Fraction *F4 = new Fraction ;
    *F4 = ++(F3++) ;
    F1.print() ;
    F2.print() ;
    F3.print() ;
    F4->print() ;
    // Difference is clear in both pre and post increment operators 
    Fraction F5 = (F3 += F1) += F1 ;
    F3.print() ;
    F5.print() ;
    return 0;
}