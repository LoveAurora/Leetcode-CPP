#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> hashtable;
    for (int i = 0; i < nums.size(); ++i)
    {
      auto it = hashtable.find(target - nums[i]);
      if (it != hashtable.end())
      {
        return {it->second, i};
      }
      hashtable[nums[i]] = i;
    }
    return {};
  }
};
int main()
{
  vector<int> nums = {3, 3};
  int target = 6;
  vector<int> v;
  Solution sol;
  v = sol.twoSum(nums, target);
  cout << v[0] << " " << v[1];
  return 0;
}
