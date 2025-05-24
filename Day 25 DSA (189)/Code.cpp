#include <vector>  

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int num_elements = nums.size();  
        k %= num_elements;
        reverse(nums.begin(), nums.end());  

        reverse(nums.begin(), nums.begin() + k);

        reverse(nums.begin() + k, nums.end());
    }
};
