class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = nums[0]; 
        int sum = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            sum = max(nums[i], sum + nums[i]); // extend or start new subarray
            maxi = max(maxi, sum); // update maximum
        }
        
        return maxi; // works for all negative numbers too
    }
};
