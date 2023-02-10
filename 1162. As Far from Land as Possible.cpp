//we can do this using bfs from both land and water side or we can use dp 
// y storing the min dist from the land to the water y using adj dist+1
// if we want to reduce the complexity by n then instead of upating the dist array
// we can directly update the grid array.
class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n=grid.size();
        int maxd=n+n+1;//num of col + num of rows+1;

        vector<vector<int>>dist(n, vector<int>(n,maxd));
        for(int i=0;i<n;i++){//this if looping for top- left
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    dist[i][j]=0;
                }
                else{
                    dist[i][j]=min(dist[i][j],min((i>0 ? dist[i-1][j]+1:maxd),(j>0 ? dist[i][j-1]+1:maxd)));
                }
            }
        }
        //tthis looping is for botom -right
        int ans = INT_MIN;
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                
                
                dist[i][j]=min(dist[i][j],min((i<n-1 ? dist[i+1][j]+1:maxd),(j<n-1 ? dist[i][j+1]+1:maxd)));

                ans=max(ans,dist[i][j]);
            
            }
        }
        return ans ==0|| ans==maxd ? -1: ans;
        
    }
};
