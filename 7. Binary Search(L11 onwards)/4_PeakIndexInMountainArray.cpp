#include<iostream>
#include<array>
using namespace std;

int findPeak(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start +(end-start)/2;
    int ans;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
             end = mid-1;
        }
        else 
        end =  mid;
        
        ans = mid;
        mid = start +(end-start)/2;
        
    }
return ans;

}
int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9,8,7,2};
    int n = 14;
    cout<<"index of peak is: "<<findPeak(arr, n);
    return 0;
}