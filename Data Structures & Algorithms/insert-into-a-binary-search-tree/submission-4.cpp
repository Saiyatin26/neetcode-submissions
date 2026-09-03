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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr){
            root=new TreeNode(val);
            return root;
        }
        TreeNode *dummy1=root;
        TreeNode* dummy=root;
        TreeNode* pre=root;
        while(dummy!=nullptr){
            if(dummy->val>val){
                pre=dummy;
                dummy=dummy->left;
            }
            else{
                pre=dummy;
                dummy=dummy->right;
            }
        }
        if(pre->val>val){
            pre->left=new TreeNode(val);
        }
        else{
            pre->right=new TreeNode(val);
        }
        

        return dummy1;
    }
};