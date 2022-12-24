// Reverse Array without printing the array using decrement operator.

#include <iostream>
using namespace std;

int revArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int printRevArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
}
int main()
{

    int arr[100];
    int n;
    cout << "Enter the size of array";
    cin >> n;
    cout << "Enter the array elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    revArray(arr, n);
    cout << "Revered array";
    printRevArray(arr, n);
    return 0;
}