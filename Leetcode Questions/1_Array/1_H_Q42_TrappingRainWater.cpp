#include<iostream>
#include<algorithm>
using namespace std;

int findTrappedWaterUnit(int arr[], int n)
{
    //left block
    int leftBlock[n];
    int leftMax=-1;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]>leftMax)
        leftMax=arr[i];

        leftBlock[i]=leftMax;
    }
    // right block
    int rightBlock[n];
    int rightMax=-1;
    for(int i = n-1;i>=0;i--)
    {
        if(arr[i]>rightMax)
        rightMax=arr[i];

        rightBlock[i]=rightMax;
    }
    int finalSum=0;

    for(int i = 0; i<n;i++)
    {
        //Direct Final Sum lengey
        int trapped = std::min(leftBlock[i],rightBlock[i]) - arr[i];
        finalSum+=trapped;
    } 
    return finalSum;
}

int main()
{
    int height[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = 12;
    cout<<"Trapped Rain Water will be unit : "<<findTrappedWaterUnit(height,n);
    return 0;
}
