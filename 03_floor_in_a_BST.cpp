class Solution {
public:
    int searchBST(TreeNode* root, int key) {
        int floor = -1;

        while(root) {
            if(root->val == key) {
                floor = root->data;
                return floor;
            }

            if(key > root->val) {
                floor = root->data;
                root = root->right;
            }
            else {
                root = root->left;
            }
        }
        
        return ceil;
    }
};