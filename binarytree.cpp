#include "head.h"
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

 TreeNode* buildBinaryTree(vector<int>& nums) {
    queue<TreeNode*> qu;
    TreeNode* root = new TreeNode(nums[0]);
    qu.push(root);
    int i = 1;
    while (i < nums.size()) {
      TreeNode* temp_root = qu.front();
      qu.pop();
      if(nums[i] != -1) {
         TreeNode* node = new TreeNode(nums[i]);
         qu.push(node);
         temp_root->left = node;
      } 
      i++;
      if (nums[i] != -1) {
         TreeNode* node = new TreeNode(nums[i]);
         qu.push(node);
         temp_root->right = node;
      }
      i++;
    }
    return root;
 }

void Preorder(TreeNode* root) {
   if (root == nullptr) return;
   cout << root->val << ';' ;
   Preorder(root->left);
   Preorder(root->right);
}
void Inorder(TreeNode* root) {
   if (root == nullptr) return;
   Inorder(root->left);
   cout << root->val << ";";
   Inorder(root->right);
}
 int main() {
    vector<int> treeorder = {5,4,8,11,-1,13,4,7,2,-1,-1,5,1};
    TreeNode* root = buildBinaryTree(treeorder);
    Preorder(root);
    cout << endl;
    Inorder(root);
    cout << endl;

 }




