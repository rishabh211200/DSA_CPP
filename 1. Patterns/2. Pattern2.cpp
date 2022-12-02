// #include <iostream>
// using namespace std;

// int main()
// {
//     /*
//       for n=3

//        1 2 3
//        4 5 6
//        7 8 9

//     */

//     int n;
//     cin >> n;
//     int i = 1;
//     int count = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << count<<" ";
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     /*
//     for n=4;

//       *
//
//         *
//
//     */

//    int n;
//    cin>>n;
//    int i=1;
//    while(i<=n){
//      int j=1;
//      while(j<=i)
//      {
//         cout<<"*"<<" ";
//         j++;
//      }
//      cout<<endl;
//      i++;
//    }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     /*
//     for n=4;

//       1
//       2 3
//       4 5 6
//       7 8 9 10
//     */

//     int n;
//     cin >> n;
//     int i = 1;
//     int count = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << count << " ";
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     /*
//     for n=4;

//       1
//       1 2
//       1 2 3
//       1 2 3 4
//     */

//     int n;
//     cin >> n;
//     int i = 1;

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout <<j<< " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     /*
//     for n=4;

//       1
//       2 2
//       3 3 3
//       4 4 4 4
//     */

//     int n;
//     cin >> n;
//     int i = 1;

//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout <<i<< " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     /*
//     for n=4;

//       1
//       2 3
//       3 4 5
//       4 5 6 7
//     */

//     int n;
//     cin >> n;
//     int i = 1;
//     int k;
//     while (i <= n)
//     {
//         int j = 1;
//         k=i;
//         while (j <= i)
//         {
//             cout <<k<< " ";
//             k++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// Approach 2 for the above pattern

#include <iostream>
using namespace std;

int main()
{
    /*
    // for n=4;

    //   1
    //   2 3
    //   3 4 5
    //   4 5 6 7
    // */

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            j = i;
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}