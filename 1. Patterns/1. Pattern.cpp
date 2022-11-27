 /* 
 Pattern 1
       1 2 3 4
       1 2 3 4
       1 2 3 4
       1 2 3 4
 */
 
 
 #include<iostream>
 using namespace std;
 
 int main()
 {
    
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

 }


 /* 
 Pattern 1
      4 3 2 1
      4 3 2 1
      4 3 2 1
      4 3 2 1
      Small tweak in logic and pattern reverse
 */
 

 #include<iostream>
 using namespace std;
 
 int main()
 {
    /* 
      4 3 2 1
      4 3 2 1
      4 3 2 1
      4 3 2 1
    */ 

    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n){
            cout<<n-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

 }