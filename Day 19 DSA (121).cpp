class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minP=INT_MAX;
        int maxP=0;
        for(int i=0;i<n;i++){
            minP=min(minP,prices[i]);
            maxP=max(maxP,prices[i]-minP);
        }
        return maxP;
    }
};


/*
class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int maxPro = 0;
        int n = arr.size();
        int minPrice = INT_MAX;

        for (int i = 0; i < arr.size(); i++) {
            minPrice = min(minPrice, arr[i]);
            maxPro = max(maxPro, arr[i] - minPrice);
        }

        return maxPro;
    }
};
*/
