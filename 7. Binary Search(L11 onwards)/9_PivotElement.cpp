#include<iostream>
#include<array>
using namespace std;

int getPivot(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start +(end-start)/2;
    int ans;
    // yha less than equal to isliye nhi kiya ki dry run krte time ek point per start or end same point per honge and start hi return krne h

    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
    
        else 
        //mid-1 isliye nhi kiya ki ho skta h ki mid hi pivot ho to mid-1 krne s array piche ho jayga.
        end =  mid;
        
        mid = start +(end-start)/2;
        
    }
return start;

}
int main()
{
    int arr[5]={3,8,10,17,1};
    cout<<"Pivot Element is: "<<getPivot(arr, 5);
    return 0;
}