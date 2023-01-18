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
            e = mid - 1;               // 0,0,1,1,2,2,2,2
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

pair<int, int> findIndex(int arr[], int size, int key)
{
    pair<int, int> ans;
    ans.first = firstOcc(arr,size,key);
    ans.second = lastOcc(arr,size,key);
    return ans;
}

int main()
{
    int arr[8] = {0, 0, 1, 1, 2, 2, 2, 2};
    int size = 8;
    int key = 2;
    pair<int,int> ans = findIndex(arr, size, key);
    cout<<ans.first<<"  "<<ans.second<<endl;
    return 0;
}