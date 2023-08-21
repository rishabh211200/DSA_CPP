#include<iostream>
using namespace std;

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

    cout<<"Your Name is :- "<<name<<endl;
    cout<<"your name length is :- "<<getLength(name);
    return 0;
}