class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> in_degree(n + 1, 0);  
        vector<int> out_degree(n + 1, 0); 
        
        for (auto& t : trust) {
            int a = t[0], b = t[1];
            out_degree[a]++;
            in_degree[b]++;
        }
        
        for (int i = 1; i <= n; ++i) {
            if (in_degree[i] == n - 1 && out_degree[i] == 0) {
                return i;  
            }
        }
        
        return -1;  // No judge found
    }
};
