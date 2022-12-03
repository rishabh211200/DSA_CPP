/*********************1281. Subtract the Product and Sum of Digits of an Integer**************************/

///Self Approach
/*
class Solution {
public:
    int subtractProductAndSum(int n) {
        int add = 0;
        int mul = 1;
        while(n!=0){
        int rem = n%10;
        mul *=rem;
        add +=rem;
        n=n/10;
        }
        int op = mul-add;
        return op;
    }
};
*/