class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int fayda=0;
        int buy = INT_MAX;
        for(int i =0;i<prices.size();i++){
            buy=min(buy,prices[i]);
            fayda=max(fayda,prices[i]-buy);
        }
        return fayda;
        
    }
};
