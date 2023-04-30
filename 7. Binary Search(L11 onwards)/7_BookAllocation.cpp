#include<iostream>
using namespace std;

bool isValid(int arr[],int n, int nos, int mid)
{
    int stud = 1;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum>mid)
        {
            stud++;
            sum = arr[i];
            if(stud>nos)
            {
                return false;
            }
        }        
    }
    return true;
}

int bookAllocation(int arr[], int n , int nos)
{
    int sum = 0;
    int ans = -1;
    int start = 0;

    for(int i = 0; i<n;i++)
    {
        sum +=arr[i];
    }
    int end = sum;

    if(n<nos)
    {
        return ans;
    }
    int mid = start + (end-start)/2;
    while(start<=end)
    {
        if (isValid(arr, n, nos, mid))
        {
        ans = mid;
        end = mid-1;
        }
        else
        start = mid+1;

        mid = start + (end-start)/2;        
    }
    return ans;
}

int main()
{
    int arr[100] = {10,20,30,40};
    int n = 4;
    int nos = 2;
    cout<<"output is : "<< bookAllocation(arr,n,nos);
    return 0;
}