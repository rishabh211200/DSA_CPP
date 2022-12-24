// // Max number finder
// #include <iostream>
// #include <climits>
// using namespace std;

// int getMax(int num[], int n)
// {
//     int max = INT_MIN; //we can use here arr[0] instead of INT_MIN
//     for (int i = 0; i < n; i++)
//     {
//         if (num[i] > max)
//         {
//             max = num[i];
//         }
//     }
//     return max;
// }

// int getMin(int num[], int n)
// {
//     int min = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (num[i] < min)
//         {
//             min = num[i];
//         }
//     }
//     return min;
// }

// int main()
// {
//     int size;
//     cin >> size;
//     int num[100];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> num[i];
//     }
//     cout << "Maximum value is" << getMax(num, size)<<endl;
//     cout << "Minimum value is" << getMin(num, size);

//     return 0;
// }

// Print the sum of the array

// #include <iostream>
// using namespace std;
// int sum(int arr[], int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }
//     return sum;
// }
// int main()
// {
//     int arr[50];
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Sum of the array is" << sum(arr, n);
//     return 0;
// }

// second approch to check whether the number can be defined in the power of 2 or not.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int count = 0;
//     while (n != 0)
//     {
//         if (n & 1)
//         {
//             count++;
//         }
//         n = n >> 1;
//     }
//     if (count == 1)
//     {
//         cout << "can be defined in the power of two";
//     }
//     else
//     {
//         cout << "can not be defined in the power of 2";
//     }
//     return 0;
// }