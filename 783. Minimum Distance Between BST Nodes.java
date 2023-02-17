/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
 // we will do inorder traversal so that we will get the sorted tree and aftr that we
 //will take the diff btw two  nodes  and we will store the min dist btw two nodes and update the value
class Solution {
    int res=Integer.MAX_VALUE;
    TreeNode previous=null;

    private void InorderTreversal(TreeNode root){
        if(root==null){
            return;
        }
        InorderTreversal(root.left);
        if(previous!=null){
            res=Math.min(res,root.val-previous.val);

        }
        previous=root;
        InorderTreversal(root.right);
            
    }
    public int minDiffInBST(TreeNode root){
       InorderTreversal(root);
        return res;
    }
    
        

    
}
