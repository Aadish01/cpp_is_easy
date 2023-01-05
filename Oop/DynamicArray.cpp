#include<iostream>
using namespace std;
class DynamicArray
{
    int *data ;
    int nextIndex ;
    int size ;
    
    public:

    DynamicArray()
    {
        size = 5 ;
        data = new int[size] ;
        nextIndex = 0 ;
        cout << "Array created...\n" ;
    }
    // copy constructor for Deep copy
    DynamicArray(DynamicArray const &obj)
    {
        size = obj.size ;
        data = new int[size] ;
        nextIndex = obj.nextIndex ;  
        for(int i=0; i<nextIndex; i++)
        {
            data[i] = obj.data[i] ;
        }
    }
    // Copy assignment operator 
    void operator=(DynamicArray const &obj)
    {
        size = obj.size ;
        data = new int[size] ;
        nextIndex = obj.nextIndex ;  
        for(int i=0; i<nextIndex; i++)
        {
            data[i] = obj.data[i] ;
        }
    }
    void AddElement(int element)
    {
        if(nextIndex == size)
        {
            size *= 2 ;
            int *old = data ;
            data = new int[size] ;
            for(int i=0;i<size; i++) 
            {
                data[i] = old[i] ;
            }
            delete[] old ; // delete old data
        }
        data[nextIndex] = element ;
        nextIndex ++ ;
        cout << "Added...\n" ;
        
    }
    int get(int i) const
    {
        if(i < size)
            return data[i] ;
        else
            return -1 ;
    }
    void add(int i, int element)
    {
        if(i > size)
            return ;
        else if(i==size)
            AddElement(element) ;
        else
            data[i] = element ;
    }
    void print() const
    {
        for(int i=0; i<nextIndex; i++)
        {
            cout << data[i] << " " ;
        }
        cout << "\n" ;
    }
};
int main()
{
    DynamicArray D1 ;
    D1.AddElement(3) ;
    D1.AddElement(4) ;
    D1.AddElement(5) ;
    D1.AddElement(6) ;
    D1.AddElement(7) ;
    D1.AddElement(8) ;
    D1.print() ;
    DynamicArray D2(D1) ; // performs shallow copy
    DynamicArray D3 ;
    D3 = D1 ;  
    D1.add(0, 233) ;
    D2.print() ; // change happened
    D3.print() ; // change happened   
    // To avoid this change we make own constructor 
    return 0;  
}