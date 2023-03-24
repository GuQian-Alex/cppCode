//二叉树的层序遍历
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
     queqe<TreeNode*> que;  // 建立一个队列
     if(root!=NULL) que.push(root); //把root压入队列
     vector<vector<int>> result; //建立一个vector来储存结果
     while(!que.empty()){
     int size=que.size();
       vector<int> vec;
       for(int i=0;i<size;i++){
       TreeNode* node = que.front();
         que.pop();
         vec.push_back(node->val);
         if(node->left) que.push(node->left);
         if(node->right) que.push(node->right);
       }
       result.push_back(vec);
     }
      return result;
    }
};

//二叉树的对阵
