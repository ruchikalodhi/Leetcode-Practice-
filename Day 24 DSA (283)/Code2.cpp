class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0; // Pointer to track the position to move the next non-zero
                   // element

        // Loop through the array
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]); // Swap non-zero element with the
                                        // element at index j
                j++;                    // Move j to the next position
            }
        }
    }
};
