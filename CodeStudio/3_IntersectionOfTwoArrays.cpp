/*******************Q - Intersection of two sorted arrays*******************/
/******************Bruteforce Approach but TLE*********************/
#include<iostream>
#include<limits.h>
using namespace std;

void FindIntersection(int arr1[],int arr2[],int m, int n)
{
    int ans[100];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j<n;j++)
        {
            if(arr1[i]<arr2[j]){
                break;
            }
            if(arr1[i] == arr2[j]){
                cout<<arr1[i];
                arr2[j]=INT_MIN;
                break; 
            }
        }
    }
}
int main()
{
    int arr1[100] = {1,2,3};
    int m = 3;
    int arr2[100] = {3,4};
    int n = 2;
    FindIntersection(arr1,arr2,m,n);
    return 0;
}