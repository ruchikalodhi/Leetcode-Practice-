class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = -1;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] == 0){
                k = j;
                break;
            }
        }
        for(int i = k + 1; i<nums.size(); i++){
            if(k == -1){
                return ;
            }
            if(nums[i] != 0){
                swap(nums[k],nums[i]);
                k++;
            }
        }
    }
};
