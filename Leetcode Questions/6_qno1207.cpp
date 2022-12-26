#include<iostream>
using namespace std;

int findSame(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
        res &= arr[i];
    return res;
}

int main()
{
    int arr[6] = {1, 1, 2, 3, 3, 3};
    int n = 6;
    cout<<"Your output is :  "<<findSame(arr,n);
    return 0;
}