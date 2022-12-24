// Linear Search Program in C++
#include <iostream>
using namespace std;
bool check(int arr[], int n, int v)
{    
  
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == v)
        {
            return 1;
        }
      
    }
      
            return 0;
}
int main()
{

    int arr[100];
    int n;
    int v;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<< "no is to  be checked";
    cin >> v;
    bool found= check(arr,n,v);
    if(found){
        cout<<"present";
    }
    else{
        cout<<"Not Present";
    }
    return 0;
}