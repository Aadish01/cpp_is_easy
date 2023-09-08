#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> FindIntersection(int n, int *arr1, int m, int *arr2){
    vector<int> output ;
    unordered_map<int,int> map ;
    for(int i=0;i<n;i++)
    {
        map[arr1[i]]++ ;
    }
    for(int i=0;i<m;i++)
    {
        if(map.find(arr2[i]) != map.end())
            output.push_back(arr2[i]);
    }
    return output ;
}

int main()
{
    int times ;
    cin >> times ;
    while(times>0){

        int n ;
        cin >> n ;
        int *arr1 = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        int m ;
        cin >> m ;
        int *arr2 = new int[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }

        vector<int> output = FindIntersection(n,arr1,m,arr2);
        if(output.size() != 0 )
            for (auto &&i : output)
            {
                cout << i << " ";
            }
        else
            cout << "not found!";
        
        delete[] arr1 ;
        delete[] arr2 ;

        --times;
    }
    return 0;
}