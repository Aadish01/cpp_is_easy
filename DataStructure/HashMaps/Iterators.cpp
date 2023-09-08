#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> ourMap;
    ourMap[1] = 2 ;
    ourMap[2] = 3 ;
    ourMap[3] = 4 ;
    ourMap[5] = 6 ;
    ourMap[4] = 5 ;
    ourMap[6] = 7 ;
    
    unordered_map<int, int>::iterator it = ourMap.begin();
    while(it != ourMap.end())
    {
        cout << it ->first << "  "  << it->second << endl ;
        it++ ;
    }

    return 0;
}