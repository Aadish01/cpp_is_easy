#include<iostream>
using namespace std;
void print(int *p, int size)
{
    for (int i = 0 ; i< size ; ++i)
    {
        cout << p[i] << " " ;
    }
    cout << endl ;
}
void merge(int *array, int l, int r) {
   int m = (r+l)/2 ;
   int i, j, k, nl, nr;
   //size of left and right sub-arrays
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   //fill left and right sub-arrays
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   //marge temp arrays to real array
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {       //extra element in left array 
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {     //extra element in right array
      array[k] = rarr[j];
      j++; k++;
   }
}
void Mergesort(int *a, int si, int ei)
{
    if(si>=ei)
        return;
    Mergesort(a, si, (si+ei)/2) ;
    Mergesort(a, (si+ei)/2 + 1, ei) ;
    print(a, 10) ;
    merge(a, si, ei) ;
}
int main()
{
    int Arr[10] = {1, 5, 6, 10, 3, 6, 23, 4, 2, 7} ;
    cout << "Sorting using Merge Sort..." << endl ;
    Mergesort(Arr, 0, 9) ;
    for(int i=0 ; i<10 ; i++)
    {
        cout<< Arr[i] << " " ;
    }
    return 0;
}