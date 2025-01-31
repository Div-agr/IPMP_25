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
    int depth=0;
    int findMaxDepth(TreeNode* root){
        if(!root)
            return 0;
        return 1+max(findMaxDepth(root->left),findMaxDepth(root->right));
    }
    int maxDepth(TreeNode* root) {
        return findMaxDepth(root);
    }
};