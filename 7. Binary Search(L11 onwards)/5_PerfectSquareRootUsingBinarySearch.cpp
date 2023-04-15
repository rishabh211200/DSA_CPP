//  Given a non-negative integer x,
//  return the square root of x rounded down to the nearest integer.
//  The returned integer should be non-negative as well.

#include<iostream>
using namespace std;

int findSqrt(int n)
{
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end)
    {
        if(mid * mid == n)
        {
            return mid;
        }
        if(mid * mid < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        
        mid = start + (end-start)/2; 
    }
    return ans;
}


int main()
{
    cout<<"Enter a number, for finding it's SQrt"<<endl;
    int n;
    cin>>n;
    cout<<"The Square root of your number is"<<findSqrt(n);
}