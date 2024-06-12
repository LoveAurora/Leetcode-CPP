#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {

    int len = prices.size();
    int dp[len][2];
    dp[0][0] = 0, dp[0][1] = -prices[0];
    for (int i = 0; i < len; i++)
    {
      dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + prices[i]);
      dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] - prices[i]);
    }
    return dp[len - 1][0];
  }
};
int main()
{
  return 0;
}