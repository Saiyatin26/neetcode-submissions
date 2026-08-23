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
int ans=0;
    int diameterOfBinaryTree(TreeNode* root) {
        check(root);
        return ans;
    }
    int check(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        
        int left=check(root->left);
        int right=check(root->right);
        if(ans<=left+right){
            ans=left+right;
        }
        return 1+max(left,right);
    }
};
