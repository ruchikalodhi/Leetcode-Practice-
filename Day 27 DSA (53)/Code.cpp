class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int maxSum = INT_MIN;

        for(auto i : nums){
            sum += i;
            maxSum = max(maxSum, sum);
            if(sum < 0) sum = 0;
        }

        return maxSum;
    }
};
