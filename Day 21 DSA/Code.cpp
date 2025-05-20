class Solution {
public:
    bool checkValidString(string s) {
        int c = 0; 
        int n = s.size(); 
        for (int i = 0; i < n; ++i) {
            if (s[i] != ')') {
                ++c;
            }
            else if (c > 0) {
                --c;
            }
            else {
                return false;
            }
        }
        c = 0; 
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] != '(') {
                ++c;
            } 
            else if (c > 0) {
                --c;
            }
            else {
                return false;
            }
        }
        return true;
    }
};
