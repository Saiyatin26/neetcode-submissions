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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool a,b;
        if(p==nullptr && q==nullptr){
            return true;
        }
        if (p==nullptr || q==nullptr){
            return false;
        }
        if(p->val!=q->val){
            return false;
        }
        a=isSameTree(p->left,q->left);
        b=isSameTree(p->right,q->right);
        if(a & b){
            return true;
        }
        return false;
    }
};
