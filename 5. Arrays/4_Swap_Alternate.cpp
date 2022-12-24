#include <iostream>
using namespace std;

/*
arr-  1,2,3,4,5
swap- 2,1,4,3,5
*/
int swapArray(int arr[], int n)
{
    for (int i = 0; i < n; i = i + 2)
    {

        if (i+1 < n)
        {
           swap(arr[i], arr[i + 1]);  
        }
       
    }
}
int printSwapArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;

    cout << "Enter the size of array";
    cin >> n;
    int arr[100];
    cout << "Enter the array elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swapArray(arr, n);
    cout << "Swapped array";
    printSwapArray(arr, n);
    return 0;
}