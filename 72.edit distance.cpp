class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>> distance(word1.length()+1,vector<int>(word2.length()+1,0));

        for(int i=0;i<distance.size();i++)
            for(int j=0;j<distance[0].size();j++){
                if(i==0)
                    distance[i][j]=j;
                else if(j==0)
                    distance[i][j]=i;
            }
        for(int i=1;i<distance.size();i++)
            for(int j=1;j<distance[0].size();j++){
                if(word1[i-1]==word2[j-1])
                    distance[i][j]=distance[i-1][j-1];
                else 
                    distance[i][j]=1+min(distance[i-1][j-1],min(distance[i-1][j],distance[i][j-1]));
            }
        return distance[word1.length()][word2.length()];
        
        
    }
};
