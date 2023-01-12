class Solution {
public:
    vector<int> v;
    void preorder(TreeNode *root){
        if(!root) return;
        v.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        preorder(root1);
        preorder(root2);

        sort(v.begin(),v.end());
        return v;
    }
};
