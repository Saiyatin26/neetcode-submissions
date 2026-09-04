class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {

        TreeNode *dummy = root;
        TreeNode *pre = nullptr;

        // Find the node
        while(dummy != nullptr){

            if(dummy->val == key){
                break;
            }

            pre = dummy;

            if(dummy->val > key)
                dummy = dummy->left;
            else
                dummy = dummy->right;
        }

        // Key not found
        if(dummy == nullptr)
            return root;


        // =========================
        // CASE 1: TWO CHILDREN
        // =========================
        if(dummy->left != nullptr && dummy->right != nullptr){

            TreeNode* sucessorparent = dummy;
            TreeNode* sucessor = dummy->right;

            while(sucessor->left != nullptr){
                sucessorparent = sucessor;
                sucessor = sucessor->left;
            }

            dummy->val = sucessor->val;

            if(sucessorparent->left == sucessor)
                sucessorparent->left = sucessor->right;
            else
                sucessorparent->right = sucessor->right;

            delete sucessor;
        }


        // =========================
        // CASE 2: ONE CHILD
        // =========================
        else if(dummy->left != nullptr || dummy->right != nullptr){

            TreeNode* child;

            if(dummy->left != nullptr)
                child = dummy->left;
            else
                child = dummy->right;

            // dummy is root
            if(pre == nullptr){
                delete dummy;
                return child;
            }

            if(pre->left == dummy)
                pre->left = child;
            else
                pre->right = child;

            delete dummy;
        }


        // =========================
        // CASE 3: NO CHILDREN
        // =========================
        else{

            // dummy is root
            if(pre == nullptr){
                delete dummy;
                return nullptr;
            }

            if(pre->left == dummy)
                pre->left = nullptr;
            else
                pre->right = nullptr;

            delete dummy;
        }

        return root;
    }
};