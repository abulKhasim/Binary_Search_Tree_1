class Solution {
public:
    int searchBST(TreeNode* root, int key) {
        int ceil = -1;

        while(root) {
            if(root->val == key) {
                ceil = root->data;
                return ceil;
            }

            if(key > root->val) {
                root = root->right;
            }
            else {
                ceil = root->data;
                root = root->left;
            }
        }
        
        return ceil;
    }
};