// #include<iostream>
// using namespace std;

// int main()
// {
//     int i = 7;
//     cout<<(++i)<<endl; //Pre increment
//     cout<<(i++)<<endl; // Post increment
//     cout<<(i--)<<endl; // post decrement
//     cout<<(--i)<<endl; // pre decrement
//     return 0;
    
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     //Find output 
//     int a, b=1;
//     a=10;
//     if (++a) // agar ye if condition 0 hai means false sirf tb ye else pr jayega suppose a = -1 hota aur phir ye 0 toh ye else pr jata
//     cout<<b;
//     else
//     cout<< ++b;
//     return 0;
// }


  ///////////////////////Print 1 to 5


// #include<iostream>
// using namespace std;

// int main()
// {
//     //Approach 1
//     // int n = 5;
//     // for(int i = 1; i<=n;i++)
//     // {
//     //     cout<<i<<endl;
//     // }
//     /////////////////or
//     //Approach 2
//     int n = 5;
//     int i = 1;
//     for(;;){
//         if(i<=n){
//         cout<<i<<endl;
//         }
//         else
//         break;
//         i++;
//     }
//     return 0;
// }


/////Fibonacci series 10 iteration
#include<iostream>
using namespace std;

int main()
{
    int n = 10;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 1;i<=n-2;i++){    // agar hamein exact 10 iteration chaiye toh hamne n-2 use kiya kuki do hum explicitly print krwa chuke hai
        int sum = a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
    
    return 0;
}