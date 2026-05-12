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
        int currdia = 0;

    int height(TreeNode* root){
          if(root == NULL){
            return 0;
        }
        int leftdia = height(root->left);
        int rightdia = height(root->right);
        currdia = max( currdia, leftdia + rightdia) ;
        return max(leftdia, rightdia)+1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
      height(root);
      return currdia;

    }
};