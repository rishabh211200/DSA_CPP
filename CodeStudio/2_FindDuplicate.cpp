// Brute Force not working yet
// https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_1112602?leftPanelTab=0

#include <iostream>
using namespace std;
int findDuplicate(int arr[], int n)
{
    int count = 0, i;
    for (i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == arr[j])
            {
                count++;
            }
            if (count == 2)
            {
                break;
            }
        }
        if (count == 2)
        {
            break;
        }
    }
    return i;
}
int main()
{
    int arr[5] = {1, 3, 4, 2, 2};
    int n = 5;
    cout << "Duplicate number is  :" << findDuplicate(arr, n);
    return 0;
}