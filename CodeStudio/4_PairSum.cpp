/***************     Approach better than love babbar        ***************/
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pairsum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
            if (arr[i] + arr[j] == s)
            {

                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                ans.push_back(temp);
            }
    }
    return ans;
}

int main()
{
    int arr[] = {2, -3, 3, 3, -2};
    int s = 0;
    // pairsum(arr,s);
    return 0;
}