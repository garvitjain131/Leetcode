class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        // Edge case: Single element array
        if (n == 1) return (nums[0] == target) ? 0 : -1;

        int pivot = getpivot(nums);

        // If array is not rotated
        if (pivot == 0) {
            return binarySearch(nums, 0, n - 1, target);
        }

        // Determine which part to search
        if (target >= nums[pivot] && target <= nums[n - 1]) {
            return binarySearch(nums, pivot, n - 1, target);
        } else {
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }

private:
    // Standard binary search
    int binarySearch(vector<int>& nums, int start, int end, int key) {
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == key)
                return mid;
            else if (key > nums[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }

    // Find pivot index where rotation happened
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