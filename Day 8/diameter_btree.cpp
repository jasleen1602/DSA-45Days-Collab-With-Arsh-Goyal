/*
The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.
*/

class Solution
{
public:
    int height(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        return max(lh, rh) + 1;
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        int maxd = max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right));
        return max(lh + rh, maxd);
    }
};