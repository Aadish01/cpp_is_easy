#include<iostream>
using namespace std;
class Polynomial
{
    int *degCoef ;
    int capacity ;

    public:

    // default constructor
    Polynomial()
    {
        capacity = 5 ;
        degCoef = new int[capacity] ;
        for(int i = 0; i<capacity; i++)
        {
            degCoef[i] = 0 ;
        }
    }

    // parameterised constructor
    Polynomial(int capacity)
    {
        this->capacity = capacity ;
        degCoef = new int[capacity] ;
        for(int i = 0; i<capacity; i++)
        {
            degCoef[i] = 0 ;
        }
    }

    // copy constructor
    Polynomial(Polynomial const &obj)
    {
        capacity = obj.capacity ;
        degCoef = new int[capacity] ;
        for(int i = 0; i<capacity; i++)
        {
            degCoef[i] = obj.degCoef[i] ;
        }
    }

    // copy assignment operator
    void operator=(Polynomial const &obj)
    {
        capacity = obj.capacity ;
        degCoef = new int[capacity] ;
        for(int i = 0; i<capacity; i++)
        {
            degCoef[i] = obj.degCoef[i] ;
        }  
    }

    void print() const 
    {
        for(int i=0; i<capacity; i++)
        {
            if(degCoef[i]!=0)
                cout << degCoef[i] << "x"<< i << " ";
        }
        cout << endl ;
    }
    // setCoef operation 
    void SetCoef(int d, int coef)  
    {
        if(d>=capacity)
        {
            int newcapacity = d+1 ;
            int *newdeg  = new int [newcapacity] ;
            for(int i=0; i<newcapacity; i++)
                newdeg[i] = 0 ;
            for(int i = 0; i<capacity; i++)
            {
                newdeg[i] = degCoef[i] ;
            }
            degCoef = newdeg ;
            capacity = newcapacity ;
        }
        degCoef[d] = coef ;
    }
    // addition operation
    Polynomial operator+(Polynomial const &obj)
    {
        Polynomial *Sum = new Polynomial(max(capacity, obj.capacity)) ;
        for(int i=0; i<Sum->capacity; i++)
        {
            if(i<capacity)
                Sum->SetCoef(i, degCoef[i]) ;
            if(i<obj.capacity)
            {
                int old = Sum->degCoef[i] ;
                Sum->SetCoef(i, old + obj.degCoef[i]) ;
            }
        }
        return *Sum ;
    }
    //subtraction operation
    Polynomial operator-(Polynomial const &obj)
    {
        Polynomial *Sum = new Polynomial(max(capacity, obj.capacity)) ;
        for(int i=0; i<Sum->capacity; i++)
        {
            if(i<capacity)
                Sum->SetCoef(i, degCoef[i]) ;
            if(i<obj.capacity)
            {
                int old = Sum->degCoef[i] ;
                Sum->SetCoef(i, old - obj.degCoef[i]) ;
            }
        }
        return *Sum ;
    }
    //Multiplacation operation
    Polynomial operator*(Polynomial const &obj)
    {
        Polynomial *Sum = new Polynomial(capacity*obj.capacity) ;
        for(int i=0; i<capacity; i++)
        {
            if(degCoef[i])
            {
                for(int j=0; j<obj.capacity; j++)
                {
                    if(obj.degCoef[j])
                    {
                        int old = Sum->degCoef[i+j] ;
                        Sum->SetCoef(i+j, (degCoef[i]*obj.degCoef[j])+old) ;
                    }
                }
            }
        }
        return *Sum ;
    }
};
int main()
{
    Polynomial P1 ;
    P1.SetCoef(3, 6) ;
    P1.SetCoef(2, -5) ;
    Polynomial P2 ;
    P2.SetCoef(2, -4) ;
    P2.SetCoef(3, 5) ;
    Polynomial P3 = P1 * P2 ;
    P1.print() ;
    P2.print() ;
    P3.print() ;
    return 0;
}