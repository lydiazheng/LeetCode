//Given a binary tree, find its maximum depth.

//The maximum depth is the number of nodes along the longest path 
//from the root node down to the farthest leaf node.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        //it's 0 if you consider the height as a edge count (so that a single node doesn't have any edge, hence 0)
        //it's 1 if you consider the height as a node count (so that a single node counts as 1)
        if(root == NULL)
            return 0;
        return 1 + max( maxDepth(root->left), maxDepth(root->right));

    }
    
    
};