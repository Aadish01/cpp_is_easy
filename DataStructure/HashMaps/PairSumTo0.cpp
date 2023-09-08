#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int NoOfPairSumTo0(vector<int> array){
    int pairs = 0 ;
    unordered_map<int, int> map ;
    for (auto &&i : array)
    {
        if(map.find(-i) != map.end())
            pairs++ ;
        map[i];
    }
    return pairs ;
}
int main()
{
    cout << NoOfPairSumTo0({2, 1, -2, 2, 3});
    return 0;
}