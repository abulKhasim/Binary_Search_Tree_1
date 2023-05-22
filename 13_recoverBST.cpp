class Solution {
private:
    TreeNode* first;
    TreeNode* last;
    TreeNode* middle;
    TreeNode* pre;
private:
    void inorder(TreeNode* root) {
        if(root == NULL) return;
        
        inorder(root->left);

        if(pre != NULL && (root -> val < pre->val)) {
            if(first == NULL) {
                first = pre;
                middle = root;
            }
            else {
                last = root;
            }
        }

        pre = root;        
        inorder(root->right);
    }
public:
    void recoverTree(TreeNode* root) {
        first = last = middle = NULL;
        pre = new TreeNode(INT_MIN);
        inorder(root);
        if(first && last) swap(first->val, last->val);
        else if(first && middle) swap(first->val, middle->val);
    }
};