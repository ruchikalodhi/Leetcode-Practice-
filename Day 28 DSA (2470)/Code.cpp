class Solution {
 public:
  int subarrayLCM(vector<int>& nums, int k) {
    int ans = 0;

    for (int i = 0; i < nums.size(); ++i) {
      int curLCM = nums[i];
      for (int j = i; j < nums.size(); ++j) {
        curLCM = std::lcm(curLCM, nums[j]);
        if (curLCM > k)
          break;
        if (curLCM == k)
          ++ans;
      }
    }
    return ans;
  }
};
