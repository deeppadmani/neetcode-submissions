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
    bool isBalancedF = true;
    bool isBalanced(TreeNode* root) {
     dfs(root);
     return isBalancedF;   
    }

    int dfs(TreeNode* root)
    {
        if(root == NULL || isBalancedF == false) return 0;
        int leftHeight = dfs(root->left);
        int rightHeight = dfs(root->right);
        if (abs(leftHeight - rightHeight) > 1) isBalancedF = false;
        return  1 + max(leftHeight,rightHeight);
    }
};



    