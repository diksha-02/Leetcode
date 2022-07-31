class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=prices[0];
        int maxpro=0;
        for(int i=1;i<size(prices);i++){
            minp=min(minp,prices[i]);
            maxpro=max(maxpro,prices[i]-minp);
        }
        return maxpro;
    }
};
