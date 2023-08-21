#include<iostream>
using namespace std;

bool checkPalindrome(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(!isalnum(name[s])){
            s++;
        }
        if(!isalnum(name[e])){
            e--;
        }
        if(name[s] != name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
void reverse(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i]!= '\0' ;i++){
        count ++;
    }
    return count;
}

int main()
{
    char name[20];
    cout<<"Enter your Name :-"<<endl;
    cin>>name;
    cout<<"your name length is :- "<<getLength(name)<<endl;;
    int len = getLength(name);
    reverse(name,len);
    cout<<"your name's reverse is :- "<<name<<endl;
    bool ans = checkPalindrome(name,len);
    cout<<"Your Name Is Palindrome or not:"<< ans;
    return 0;
}