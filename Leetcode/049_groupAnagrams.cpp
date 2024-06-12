#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs)
  {
    unordered_map<string, vector<string>> mp;
    for (auto str : strs)
    {
      string key = str;
      // 对 key 中的字符进行排序  key中的字母会由小到大排序
      sort(key.begin(), key.end());
      mp[key].emplace_back(str);
    }
    vector<vector<string>> ans;
    for (auto it = mp.begin(); it != mp.end(); ++it)
    {
      ans.emplace_back(it->second);
    }
    return ans;
  }
};

int main()
{
  return 0;
}