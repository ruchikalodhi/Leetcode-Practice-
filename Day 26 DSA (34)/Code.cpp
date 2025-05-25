class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = find(nums, target, true);
        if (left == -1) {
            return {-1, -1}; 
        }
        int right = find(nums, target, false);
        return {left, right};
    }
    
private:
    int find(const vector<int>& nums, int target, bool isLeft) {
        int left = 0, right = nums.size() - 1;
        int a = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                a = mid;
                if (isLeft) {
                    right = mid - 1;  // for the left side
                } else {
                    left = mid + 1;   // for right side
                }
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return a;
    }
};
