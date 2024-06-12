#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void rotate(vector<vector<int>> &matrix)
  {
    int len = matrix.size();
    for (int i = 0; i < len / 2; i++)
    {
      // matrix[i].swap(matrix[len - i - 1]);
      swap(matrix[i], matrix[len - i - 1]);
    }
    for (int i = 0; i < len; i++)
    {
      for (int j = i + 1; j < len; j++)
      {
        swap(matrix[i][j], matrix[j][i]);
      }
    }
  }
};

int main()
{
  return 0;
}