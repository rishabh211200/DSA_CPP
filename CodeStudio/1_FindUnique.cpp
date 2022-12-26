// /******************************Self approACH******************************************/
// #include <iostream>
// using namespace std;

// /*
//  For self reference
// 5, 3, 1, 5, 1, 3, 4, 7, 4, 8, 8
// a, b, c, d, e, f, g, h, i, j, k

// */

// int uniqueFinder(int arr[], int n)
// {
//     int ans;
//     int count = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i == j)
//             {
//                 j++;
//             }
//             count = 1;
//             if (arr[i] == arr[j])
//             {
//                 count++;
//                 if (count == 2)
//                 {
//                     break;
//                 }
//             }
//         }
//         if (count == 1)
//         {
//             ans = arr[i];
//             break;
//         }
//     }
//     return ans;
// }
// int main()
// { // case 1:
//     // int arr[] = {1, 3, 2, 3, 1};
//     // int n=5;

//     // case 2:
//     // int arr[]={5};
//     //  int n = 1;

//     // Final case 3 :
//     //

//     int arr[] = {5, 3, 1, 5, 1, 3, 4, 7, 4, 8, 8};
//     int n = 11;
//     // Calling business logic
//     cout << "Unique Element is " << uniqueFinder(arr, n);

//     return 0;
// }

///////////////////*********GFG approach**********/////////////////////////
// geekforgeek Approach

#include <iostream>
using namespace std;

// Function to return the only odd
// occurring element
int findOdd(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
        res ^= arr[i];
    return res;
}

// Driver Method
int main(void)
{
    int arr[] = { 12, 12, 14, 90, 14, 14, 14 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The odd occurring element is  "<< findOdd(arr, n);
    return 0;
}