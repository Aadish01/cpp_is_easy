#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> V1 ; 

    // capacity() give size of underlying array in vectors
    // it increses as: 0 1 2 4 8 16 32 64 128 ... 
    
    cout << "capacity: " << V1.capacity() << endl;
    V1.push_back(34) ;
    cout << "capacity: " << V1.capacity() << endl ;
    V1.push_back(35) ;
    cout << "capacity: " << V1.capacity() << endl ;
    V1.push_back(36) ;
    cout << "capacity: " << V1.capacity() << endl ;
    V1.push_back(37) ;
    cout << "capacity: " << V1.capacity() << endl ;
    V1.push_back(38) ;
    cout << "capacity: " << V1.capacity() << endl ;
    V1.push_back(39) ;
    cout << "capacity: " << V1.capacity() << endl ;

    V1[3] = 100 ; // 🖐️ use with care
    // Don't use [] to assing values in vector 
    // Handle with care 
    // Use [] only for getting or updating values not assigning
    // Use at() instead of [] for getting values 
    int i = 0 ;
    while(i<V1.size())
    {
        cout << V1[i] << " ";
        i++ ;
    }
    // pop_back() removes last element
    cout <<"\nBefore poping size: "<< V1.size() ;
    V1.pop_back() ; 
    V1.pop_back() ;
    V1.pop_back() ;
    cout <<"\nAfter poping size: "<< V1.size() << endl<< endl;

    // See capacity didn't change even afte poping 
    cout<< "capacity: "<< V1.capacity();
    cout<< "\nSee capacity didn\'t change even after poping" << endl<< endl ;
    
    return 0;
}