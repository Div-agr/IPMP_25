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
    void findRoot(TreeNode* root, TreeNode* subRoot, TreeNode*& start){
        if(root==NULL)
            return;   
        if(root->val==subRoot->val && check(root,subRoot)){
            start=root;
            return;
        }
        findRoot(root->left,subRoot,start);
        findRoot(root->right,subRoot,start);
    }

    bool check(TreeNode* root, TreeNode* subRoot){
        if(!root && !subRoot){
            return true;
        }else if(!root || !subRoot){
            return false;
        }
        return (root->val==subRoot->val)  && check(root->left, subRoot->left) && check(root->right, subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root)
            return false;
        TreeNode* start=nullptr;
        findRoot(root,subRoot,start);
        if(start==NULL)
            return false;
        return check(start,subRoot);
    }
};