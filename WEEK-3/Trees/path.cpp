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
    vector<string>s;
    string str="";
    void findPaths(TreeNode* root,string str){
        if(!root->left && !root->right){
            s.push_back(str+to_string(root->val));
        }
        if(root->left)
            findPaths(root->left,str+to_string(root->val)+"->");
        if(root->right)
            findPaths(root->right,str+to_string(root->val)+"->");
        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root)
            return s;
        findPaths(root,str);
        return s;
    }
};