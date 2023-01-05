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
};
int main()
{
    Fraction F1(2,5) ;
    Fraction F2 = ++(++F1) ; // F2 gets 12/5 but F1 remains 7/5 
    // 🌟 this happens because we didin't recieve ++F1 into F1, we directly used other funcion
    // here second operation is performed into a copy of object present in buffer, value of this is changed
    // hence buffer memory is copied into F2 and no change happened in F1 
    F1.print() ;
    F2.print() ;
    // 🌈 Hence to avoid this copy making, we have to use copy by referrence &
    // we return Fraction& (return by refference), no copy making
    // so basically value of this in not changed here by using pass by refference
    // 😸 It solves the problem
    return 0 ;
}