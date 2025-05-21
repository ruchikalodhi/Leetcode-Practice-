class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int a = 0;
        int b;
        for (int i = 0; i < n; i++) {
            if (a == 0) {
                a = 1;
                b = nums[i];
            } else if (b == nums[i])
                a++;
            else
                a--;
        }

        int c = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == b)
                c++;
        }

        if (c > (n / 2))
            return b;
        return -1;
    }
};
