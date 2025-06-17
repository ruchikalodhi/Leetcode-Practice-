class Solution {
public:
    int hammingWeight(int n) {
        int res = 0;
        while(n){
            n &= (n - 1);
            ++res;
        }
        return res;
    }
};
