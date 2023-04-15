#include <iostream>
#include <vector>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n)
{
	// code here
	vector<int> vect;
	for (int i = 0; i < n; i++)
	{
		int j = i+1;
		int ans = arr[i];
		if (ans == j)
		{
			vect.push_back(ans);
		}
	}
	return vect;
}
int main()
{

	int n = 6;
	int arr[6] = {12, 2, 1, 10, 34, 1};
	vector<int> ans = valueEqualToIndex(arr, n);
	for (int i = 0; i < ans.size(); i++)
		cout << ans.at(i) << ' ';

	return 0;
}