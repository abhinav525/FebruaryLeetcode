class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=profits.size();
        vector<pair<int,int>>project;
        for(int i=0;i<n;i++){
            project.push_back({capital[i],profits[i]});

        }
        sort(project.begin(),project.end());
        priority_queue<int>profit;
        int j=0;
        for(int i=0;i<k;i++){
            while(j<n && project[j].first<=w){
                profit.push(project[j++].second);
            }
            if(profit.empty()){
                break;
            }
            w+=profit.top();
            profit.pop();
        }
        return w;

        
    }
};
