#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
  vector<vector<int>> zigzagLevelOrder(TreeNode *root)
  {
    queue<TreeNode *> q;
    TreeNode *dummy;
    vector<int> ans;
    vector<vector<int>> res;
    if (root == nullptr)
      return res;

    q.push(root);
    int count = 1, flag = 1, sum = 0;
    while (!q.empty())
    {
      ans.clear();
      while (count > 0)
      {
        dummy = q.front();
        q.pop();
        if (dummy->left != nullptr)
        {
          q.push(dummy->left);
          sum++;
        }
        if (dummy->right != nullptr)
        {
          q.push(dummy->right);
          sum++;
        }
        ans.push_back(dummy->val);
        count--;
      }
      count = sum;
      sum = 0;
      if (flag == 1)
      {
        reverse(ans.begin(), ans.end());
        flag = 0;
      }
      else
        flag = 1;
      res.push_back(ans);
    }
    return res;
  }
};

int main()
{
  return 0;
}