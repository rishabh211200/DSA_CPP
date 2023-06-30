// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> valueEqualToIndex(int arr[], int n)
// {
// 	// code here
// 	vector<int> vect;
// 	for (int i = 0; i < n; i++)
// 	{
// 		int j = i+1;
// 		int ans = arr[i];
// 		if (ans == j)
// 		{
// 			vect.push_back(ans);
// 		}
// 	}
// 	return vect;
// }
// int main()
// {

// 	int n = 6;
// 	int arr[6] = {12, 2, 1, 10, 34, 1};
// 	vector<int> ans = valueEqualToIndex(arr, n);
// 	for (int i = 0; i < ans.size(); i++)
// 		cout << ans.at(i) << ' ';

// 	return 0;
// }

#include <iostream>
#include <vector>

int findMissingPositive(std::vector<int>& nums) {
    int n = nums.size();

    // Swap positive integers to their correct positions
    for (int i = 0; i < n; i++) {
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            std::swap(nums[i], nums[nums[i] - 1]);
        }
    }

    // Find the first index where nums[i] != i+1
    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }

    // All positive integers in the range [1, n] are present
    return n + 1;
}

int main() {
    std::vector<int> nums = {1, 2, 0};
    std::cout << "Smallest missing positive integer: " << findMissingPositive(nums) << std::endl;

    nums = {3, 4, -1, 1};
    std::cout << "Smallest missing positive integer: " << findMissingPositive(nums) << std::endl;

    nums = {7, 8, 9, 11, 12};
    std::cout << "Smallest missing positive integer: " << findMissingPositive(nums) << std::endl;

    return 0;
}