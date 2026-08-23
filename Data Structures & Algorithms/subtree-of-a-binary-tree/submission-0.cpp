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
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if(subroot==nullptr){
            return true;
        }
        if(root==nullptr){
            return false;
        }
        if(root->val==subroot->val){
            if(same(root,subroot)){
                return true;
            }
        }
        return isSubtree(root->left ,subroot) || isSubtree(root->right,subroot);
    }
    bool same(TreeNode* root, TreeNode* subroot){
        if(root==nullptr && subroot==nullptr){
            return true;
        }
        if(root==nullptr || subroot==nullptr){
            return false;
        }
        if(root->val!=subroot->val ){
            
            return false;
        }
        bool a=same(root->left,subroot->left);
        bool b=same(root->right,subroot->right);
        return a&b;
        
    }
};
