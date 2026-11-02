/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int Diameter = 0;
    int diameterOfBinaryTree(TreeNode* root) {
     if(root == NULL) return 0;
     int leftHeight,rightHeight;
     dfs(root);
     return Diameter;
    }

    int dfs(TreeNode* root)
    {
        if(root == NULL) return 0;
        int leftHeight = dfs(root->left);
        int rightHeight = dfs(root->right);
        Diameter = max(Diameter,(leftHeight+rightHeight));
        return  1 + max(leftHeight,rightHeight);
    }
};
