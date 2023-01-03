/****************  Code Studio wla answer ******************/
/**     https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1            ****/


// #include <bits/stdc++.h> 
// int firstOcc(vector<int>& arr, int n, int key)
// {
//     int s = 0, e = n - 1;
//     int mid = s + (e - s) / 2;
//     int ans = -1;
//     while (s <= e)
//     {
//         if (key == arr[mid])
//         {
//             ans = mid;
//             e = mid - 1;
//         }
//         else if (key > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else // key<arr[mid]
//             e = mid - 1;

//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }
// int lastOcc(vector<int>& arr, int n, int key)
// {
//     int s = 0, e = n - 1;
//     int mid = s + (e - s) / 2;
//     int ans = -1;
//     while (s <= e)
//     {
//         if (key == arr[mid])
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         // yha pr hum chize update krrhe hai isliye nested if else nhi bnaya upr wle k sth
//         else if (key > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else // key<arr[mid]
//             e = mid - 1;

//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }
// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//     pair<int,int> ans;
//     ans.first = firstOcc(arr,n,k);
//     ans.second = lastOcc(arr,n,k);
//     return ans;
// }