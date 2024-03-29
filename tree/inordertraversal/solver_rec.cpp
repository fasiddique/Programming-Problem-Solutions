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
    vector <int> sortedLst;
    void trvInord(TreeNode* node) {
        if (node == NULL) return;
        else {
            trvInord(node->left);
            sortedLst.push_back(node->val);
            trvInord(node->right);
        }
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        trvInord(root);
        return sortedLst;
    }
};
