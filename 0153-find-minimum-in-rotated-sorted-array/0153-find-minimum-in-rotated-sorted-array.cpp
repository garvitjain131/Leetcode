class Solution {
public:
    int findMin(vector<int>& nums) {
        int pivot= getpivot(nums);
        return nums[pivot];
    }
private:
    int getpivot(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        // If array is already sorted, no rotation
        if (nums[start] <= nums[end]) return 0;

        while (start < end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] >= nums[0])
                start = mid + 1;
            else
                end = mid;
        }
        return start;
    }
};