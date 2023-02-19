/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        while(!q.empty()){

            int qsize=q.size();
            vector<int>v;

            while(qsize--){
                TreeNode* noddy=q.front();
                v.push_back(noddy->val);
                q.pop();

                if(noddy->left)q.push(noddy->left);
                if(noddy->right)q.push(noddy->right);
            }//zigzag
            if(level & 1) reverse(v.begin(),v.end());
            ans.push_bach(v);
            level++;



        }
        return ans;

        
    }
};
