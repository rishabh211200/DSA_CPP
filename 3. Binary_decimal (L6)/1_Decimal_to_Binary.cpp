/* 
Jab ham kisi number ko AND & krte h 1 k sath or agar anser 1 aa jaye to Odd number h else even number h.
Lets do this for 5
5 in binary- 1 0 1 or isme hm AND & 1 krte h to 1 0 1 aayga iska mtlb last bit 1 h to number odd hua
Lets do this for 4
4 in binary- 1 0 0 or isme hm AND & 1 krte  h to 1 0 0 aayga mtlb last digit 0 h to number even hua.
*/

// Ab second kaam ki baat
/*
agar kisi number ki bit nikalni h to use 1 ka AND & krdo agar last bit 0 aaye to 0 thi else 1 thi
*/

// Convert decimal to binary
// ans = (digit*10^i)+ ans

#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n&1;
        ans=(bit * pow(10,i)) + ans;
        n=n >> 1;
        i++;
    }
    cout<<"Answer is= "<<ans<<endl;
}