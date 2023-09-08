#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int FindMaxFreq(vector<int> array){
    int maxFreq = 1;
    int maxNum = 0;
    unordered_map<int,int> freqHolder ;
    for (auto i : array)
    {
        freqHolder[i]++;
        if(maxFreq<freqHolder[i])
        {
            maxFreq = freqHolder[i];
            maxNum = i ;
        }
    }
    return maxNum;
}

int main()
{
    vector<int> array = {4,5,3,1,8,5,3,2,2,6,3,3,6,2,2,2,1};
    cout << FindMaxFreq(array);
    return 0;
}