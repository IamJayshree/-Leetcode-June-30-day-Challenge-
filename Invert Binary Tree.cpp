// I have followed the recursive approach , iterative works as well

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
   void mirrorChild(TreeNode* root){
        if(root == NULL)
            return;
        else{
           
            TreeNode* temp;
            temp = root->left;
            root->left = root->right;
            root->right = temp; 
             mirrorChild(root->left);
            mirrorChild(root->right);
        } 
    }
    
    TreeNode* invertTree(TreeNode* root) {
        mirrorChild(root);
        return root;
    }
};
