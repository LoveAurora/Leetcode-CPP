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
  bool isSymmetric(TreeNode *root)
  {
    TreeNode *node1, *node2;
    queue<TreeNode *> q;
    if (root == nullptr)
      return false;
    if (root->left == nullptr && root->right == nullptr)
      return true;
    else if ((root->left == nullptr && root->right != nullptr) || (root->left != nullptr && root->right == nullptr))
      return false;
    else
    {
      q.push(root->left);
      q.push(root->right);
    }
    while (!q.empty())
    {
      node1 = q.front();
      q.pop();
      node2 = q.front();
      q.pop();
      if (node1->val == node2->val)
      {
        if (node1->left != nullptr && node2->right != nullptr)
        {
          q.push(node1->left);
          q.push(node2->right);
        }
        else if ((node1->left != nullptr && node2->right == nullptr) || (node1->left == nullptr && node2->right != nullptr))
          return false;

        if (node1->right != nullptr && node2->left != nullptr)
        {
          q.push(node1->right);
          q.push(node2->left);
        }
        else if ((node1->right != nullptr && node2->left == nullptr) || (node1->right == nullptr && node2->left != nullptr))
          return false;
      }
      else
        return false;
    }
    return true;
  }
};
int main()
{
  return 0;
}