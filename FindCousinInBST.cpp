#include<bits/stdc++.h>

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
    
    int findLevel(TreeNode* root, int val,int level)
    {
        if (!root)
            return -1;
        else if (root->val == val)
            return level;
        else if (root->val < val) 
        {
            level += 1;
            return findLevel(root->right,val,level);
        }
        else 
        {
            level += 1;
            return findLevel(root->left,val,level);
        }
    }
    
    bool isSiblings(TreeNode* root, int x, int y)
    {
        if(root == NULL)
        {
            return false;
        }
        return ((root->left != NULL && root->right != NULL) && ((root->left->val == x && root->right->val == y) || (root->right->val == x && root->left->val == y) || isSiblings(root->left,x,y) ||isSiblings(root->right,x,y)));
        
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        cout<<isSiblings(root,x,y)<<findLevel(root,x,1)<<findLevel(root,y,1);
        if((findLevel(root,x,1) == findLevel(root,y,1)) && (!isSiblings(root,x,y)))
        {
            return true;
        }
        return false;
    }
};