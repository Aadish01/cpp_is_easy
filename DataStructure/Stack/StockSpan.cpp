// Nice Question 💓💓
// The span of the stock's price today is defined as 
// the maximum number of consecutive days(starting from
// today and going backwards) for which the price of 
// the stock was less than today's price.
#include<iostream>
#include<stack>
using namespace std;
int* StockSpan(int *StockPrice, int size)
{
    int *span = new int[size] ;
    stack<int> indexes ;
    int i = 0 ;
    indexes.push(i) ;
    span[0] = 1 ;
    for(i=1; i<size; i++)
    {

        if(StockPrice[i]==StockPrice[indexes.top()])
        {
            span[i] = i - indexes.top();
            indexes.pop() ;
            indexes.push(i) ;
        }
        if(StockPrice[i]>StockPrice[indexes.top()])
        {
            while(StockPrice[i]>indexes.top())
            {
                indexes.pop() ;
                if(indexes.empty())
                {
                    span[i] = i + 1 ;
                    break ;
                }
            }
            if(indexes.empty())
                indexes.push(i) ;
        }
        if(StockPrice[i]<StockPrice[indexes.top()])
        {       
            span[i] = i - indexes.top() ;
            indexes.push(i) ;
        }
    }
    return span ;
}
int main()
{
    int StockPrice[] = {5, 3, 8, 7, 10, 7, 7, 12, 16}  ;
    int *Span = StockSpan(StockPrice, 9) ;
    for(int i = 0; i < 9; i++)
        cout << Span[i] << " ";
    return 0;
}