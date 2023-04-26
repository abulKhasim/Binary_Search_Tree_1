class Solution {
public:
    int ans;
    void smallest(TreeNode* root, int k, int &cnt){
        if(root == NULL) {
            return;
        }

        smallest(root->left, k, cnt);
        
        cnt++;
        if(k == cnt){
           ans = root->val;
           return;
        }

        smallest(root->right, k, cnt);
         
    }
    int kthSmallest(TreeNode* root, int k) {
        int cnt = 0;
        smallest(root, k, cnt);
        return ans;
    }
};