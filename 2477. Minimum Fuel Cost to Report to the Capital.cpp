class Solution {
public:
    long long ans=0;
    long long dfs(vector<vector<int>> &v,int node,vector<int> &vis,int seats){
        vis[node]=true;//to mark the visited node
        long long cnt=1;
        for(int i=0;i<v[node].size();i++){
            int curr=v[node][i];
            if(!vis[curr])
                cnt+=(dfs(v,curr,vis,seats));
        }
        long long x= cnt/seats;//cars required 
        if(cnt%seats) x++;//left over people to get the car
        if(node!=0) ans+=x;
        return cnt;
    }
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        if(roads.size()==0)
            return 0;
        ans=0;
        int n=roads.size();
        vector<vector<int>>v(n+1);
        for(int i=0;i<n;i++){

            int x=roads[i][0],y=roads[i][1];
            v[x].push_back(y);

            v[y].push_back(x);

        }
        vector<int> vis(n+1,0);//visited node array
        dfs(v,0,vis,seats);//leaf to root dfs call
        return ans;
        
    }
};
