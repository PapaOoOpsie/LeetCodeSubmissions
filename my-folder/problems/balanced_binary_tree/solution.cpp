class Solution {
public:
    int treeDepth(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(treeDepth(root->left), treeDepth(root->right));
    }
    
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;

        return (abs(treeDepth(root->left) - treeDepth(root->right)) <= 1) && isBalanced(root->left) && isBalanced(root->right);
    }
};