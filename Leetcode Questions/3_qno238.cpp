/***********************Product of Array Except Self****************************/

#include <iostream>
#include <vector>
using namespace std;

vector<int> productExpectSelf(int arr[], int n)
{
    vector<int> ans;
    int product = 1;
    int i, j = 0;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (i == j)
                continue;
            else
                product *= arr[i];
        }
        ans.push_back(product);
        product = 1;
    }
    return ans;
}
int main()
{
    int arr[4] = {1, 2, 3, 4};
    vector<int> ans = productExpectSelf(arr, 4);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}