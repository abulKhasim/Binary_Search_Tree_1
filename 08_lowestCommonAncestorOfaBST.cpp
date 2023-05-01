class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        int rootVal = root->val;

        if(rootVal < p->val && rootVal < q->val) {
            return lowestCommonAncestor(root->right, p, q);
        }
        if(rootVal > p->val && rootVal > q->val) {
            return lowestCommonAncestor(root->left, p, q);
        }
        return root;
    }
};