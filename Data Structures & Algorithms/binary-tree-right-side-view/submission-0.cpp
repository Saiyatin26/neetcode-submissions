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
int maxr=0;
int maxleft=0;
vector<int>ans;
void findrights(TreeNode* root,int level){
    if(root==nullptr){
        return;
    }
    if(ans.size()==level){
        ans.push_back(root->val);
    }
    findrights(root->right,level+1);
    findrights(root->left,level+1);
    
}

    vector<int> rightSideView(TreeNode* root) {
        if(root==nullptr){
            return ans;
        }
        findrights(root,0);
        return ans;
    }
};
