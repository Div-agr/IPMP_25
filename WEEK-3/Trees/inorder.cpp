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
    stack<TreeNode*>st;
    void goLeft(TreeNode* root){
        if(!root)
            return;
        st.push(root);
        goLeft(root->left);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        TreeNode* node=root;
        if(!root)
            return v;
        while(node || !st.empty()){
            goLeft(node);
            node=st.top();
            v.push_back(node->val);
            st.pop();
            node=node->right;
        }
        return v;

    }
};