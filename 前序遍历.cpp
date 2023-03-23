//二叉树节点的定义
struct TreeNode
{
int val;
TreeNode*  left;
TreeNode*  right;
TreeNode(int x):val(x),left(NULL),right(NULL);
}
//前序遍历
class Solution{
  public:
  void traversal(TreeNode* cur, vector<int>& vec){
    if(cur==NULL) return;
    vec.push_back(cur->val);
    traversal(cur->left);
    traversal(cur->right);
}
  vector<int> preorderTraversal(TreeNode* root){
    vector<int> result;
    traversal(root,result);
    return result;
  }
}
//中序遍历
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        Traversal(root,result);
        return result;
    }
    void Traversal(TreeNode* cur, vector<int>& result){
        if(cur==NULL) return;

        Traversal(cur->left,result);
        result.push_back(cur->val);
        Traversal(cur->right,result);
    }
};
