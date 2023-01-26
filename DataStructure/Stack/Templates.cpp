#include<iostream>
using namespace std;
template<typename T>
class Pair
{
    T P1 ;
    T P2 ;
    public: 

    T getP1()
    {
        return P1 ;
    }
    setP1(T value)
    {
        P1 = value ;
    }
    T getP2()
    {
        return P2 ;
    }
    setP2(T value)
    {
        P2 = value ;
    }
};
template<typename T,typename U>
class Pair2
{
    T P1 ;
    U P2 ;
    public: 

    T getP1()
    {
        return P1 ;
    }
    setP1(T value)
    {
        P1 = value ;
    }
    U getP2()
    {
        return P2 ;
    }
    setP2(U value)
    {
        P2 = value ;
    }
};
int main()
{
    Pair<int> P ;
    P.setP1(3) ;
    P.setP2(6) ;
    cout << P.getP1() << " " << P.getP2() << endl ; 
    Pair2<int, Pair<int>> P2 ;
    P2.setP1(1) ;
    P2.setP2(P) ;
    cout<< P2.getP1() << " " << P2.getP2().getP1() << " " << P2.getP2().getP2() ;
    return 0;
}