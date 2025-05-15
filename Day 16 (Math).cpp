class Solution {
public:
    bool judgeSquareSum(int c) {
        long a = 0;
        long b = static_cast<long>(sqrt(c));
        while (a <= b) {
            long ss = a * a + b * b;
            if (ss == c) return true;
            if (ss < c)
                ++a;
            else
                --b;
        }
      
        return false;
    }
};