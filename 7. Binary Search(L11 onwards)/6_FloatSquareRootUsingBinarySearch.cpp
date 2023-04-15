/*       Ye upr wle question mein decimal ke baad ki values ko lane ka program hai          */

/*          ismein hum ek user se pricsion bhi lenge ki usko kaha tk ki precision chaiye point ke baad             */


/*          ismein morePrecision nikalne ka method important hai               */
#include<iostream>
using namespace std;

int findTempSqrt(int n)
{
    int start = 0;
    int end = n-1;
    long long int mid = start + (end-start)/2;
    long long int ans = -1;
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

double perfectSqrt(int n, int precision , int tempSqrt)
{
    double factor = 1;     /*       Yaha double declare krna jaruri hai kyuki ye aage jaake 0.1 phir 0.01 bhi hoga       */
    double ans = tempSqrt;                   /*       answer double mein return kregey            */
    for (int i = 0; i<precision;i++)
    {
        factor = factor/10;
        for(double j = ans; j*j<n; j+=factor)  /*         j*j<n              */
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    cout<<"Enter a number, for finding it's SQrt"<<endl;
    int n;
    cin>>n;
    int tempSqrt = findTempSqrt(n);
    int precision;
    cout<<"Enter the precision you need after decimal"<<endl;
    cin>>precision;
    cout<<"The Square root of your number is  "<<perfectSqrt(n, precision, tempSqrt );
}