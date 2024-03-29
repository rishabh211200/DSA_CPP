/**********************  Increasing order case approach ********************************/
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    
    // int mid = (start + end) / 2; // Less optimized approach
    /*     integer ki value 2^31-1 hoti hai toh worst case mein ho skta hai ki start aur end
    *      dono hi 2^31-1 ho, is case mein agar hum pehele wala formule se dono ko plus kregey
    *      toh woh integer ki range se bahar hojyega, isliye humne chalaaki dikhayi
    */
    int mid = start +(end-start)/2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        //yha pr hum chize update krrhe hai isliye nested if else nhi bnaya upr wle k sth
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else //key<arr[mid]
            end = mid - 1;

        mid = start +(end-start)/2;
    }
    return -1;
}
int main()
{
    int increasingEven[6] = {2, 8, 10, 13, 17, 20};
    int increasingOdd[5] = {21, 87, 106, 122, 165};
    int evenIndex = binarySearch(increasingEven,6,13);
    cout<<"The evenIndex is: "<<evenIndex<<endl;
    int oddIndex= binarySearch(increasingOdd,5,165);
    cout<<"The oddIndex is: "<<oddIndex<<endl;
    return 0;
}


/********************* Decreasing Order Case ************************/

// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     // int mid = (start + end) / 2; // Less optimized approach
//     /*     integer ki value 2^31-1 hoti hai toh worst case mein ho skta hai ki start aur end
//     *      dono hi 2^31-1 ho, is case mein agar hum pehele wala formule se dono ko plus kregey
//     *      toh woh integer ki range se bahar hojyega, isliye humne chalaaki dikhayi
//     */
//     int mid = start +(end-start)/2;

//     while (start <= end)
//     {
//         if (key == arr[mid])
//         {
//             return mid;
//         }
//         //yha pr hum chize update krrhe hai isliye nested if else nhi bnaya upr wle k sth
//         if (key < arr[mid])
//         {
//             start = mid + 1;
//         }
//         else //key>arr[mid]
//             end = mid - 1;

//         mid = start +(end-start)/2;
//     }
//     return -1;
// }
// int main()
// {
//     int decreasingEven[6] = {6,5,4,3,2,1};
//     int decreasingOdd[5] = {10,9,8,7,6};
//     int evenIndex = binarySearch(decreasingEven,6,5);
//     cout<<"The evenIndex is: "<<evenIndex<<endl;
//     int oddIndex= binarySearch(decreasingOdd,5,7);
//     cout<<"The oddIndex is: "<<oddIndex<<endl;
//     return 0;
// }