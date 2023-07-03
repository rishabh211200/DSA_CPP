class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        // Calculate the product of all elements to the left of each element
        vector<int> leftProducts(n, 1);
        for (int i = 1; i < n; i++) {
            leftProducts[i] = leftProducts[i - 1] * nums[i - 1];
        }
        
        // Calculate the product of all elements to the right of each element and multiply it with the left product
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            leftProducts[i] *= rightProduct;
            rightProduct *= nums[i];
        }
        
        return leftProducts;
    }
};
