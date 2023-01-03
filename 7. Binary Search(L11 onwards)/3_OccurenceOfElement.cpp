/************** Similar question but we are finding total occurence of element   ******************/

#include <iostream>

using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else // key<arr[mid]
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        // yha pr hum chize update krrhe hai isliye nested if else nhi bnaya upr wle k sth
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else // key<arr[mid]
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    return ans;
}

int findTotalOccurence(int arr[], int size, int key)
{
    int s = firstOcc(arr,size,key);
    int e = lastOcc(arr,size,key);
    int ans = (e-s)+1;
    return ans;
}

int main()
{
    int arr[8] = {0, 0, 1, 1, 2, 2, 2, 2};
    int size = 8;
    int key = 2;
    int ans = findTotalOccurence(arr,size,key);
    cout<<ans;
    return ans;
}