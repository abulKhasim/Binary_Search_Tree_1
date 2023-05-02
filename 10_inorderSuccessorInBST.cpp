class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p) {
        TreeNode* successor = NULL;
        while(root != NULL) {
            if(p->val >= root->val) {
                root = root->right;
            }
            else {
                successor = root;
                root = root->left;
            }
        }
        return successor;
    }
};