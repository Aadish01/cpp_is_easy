#include<iostream>
#include "NewTreeClass.h"
using namespace std;
int main()
{
    cout << CountNodes(TakeInputLevelWise<int>()) ;
    return 0;
}