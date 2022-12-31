/******************** Self Approach************************/
#include <iostream>
using namespace std;
int sort(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    for (i; i < size; i++)
    {
        for (j; j < size; j--)
        {
            if (i >= j)
            {
                break;
            }
            
            if (arr[i] == 0)
            {
                i++;
            }
            else if(arr[j] == 1)
                j--;
            if (arr[i] == 1 && arr[j] == 0)
            {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
        if (i >= j)
        {
            break;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0,1};
    int size = 13;
    sort(arr, size);
    return 0;
}