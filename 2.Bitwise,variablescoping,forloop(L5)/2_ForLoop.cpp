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

#include<iostream>
using namespace std;

int main()
{
    //Find output 
    int a, b=1;
    a=10;
    if (++a) // agar ye if condition 0 hai means false sirf tb ye else pr jayega suppose a = -1 hota aur phir ye 0 toh ye else pr jata
    cout<<b;
    else
    cout<< ++b;
    return 0;
}