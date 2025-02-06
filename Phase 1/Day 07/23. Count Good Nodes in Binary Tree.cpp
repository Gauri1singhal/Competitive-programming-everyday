//Leetcode: https://leetcode.com/problems/count-good-nodes-in-binary-tree/submissions/1533527257/?envType=study-plan-v2&envId=leetcode-75
//My Code: 

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
    void solve(TreeNode* root, int& count, int num){
        if(!root)return;
        if(root->val>=num){
            count++;
            num= root->val;
        }
        if(root->left){
            solve(root->left, count, num);
        }
        if(root->right){
            solve(root->right, count, num);
        }
    }
    int goodNodes(TreeNode* root) {
        int ans=0;
        solve(root, ans, root->val);
        return ans;
    }
};
