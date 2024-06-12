#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
  ListNode *rotateRight(ListNode *head, int k)
  {
    if (head == nullptr)
      return nullptr;

    ListNode *dummy = head;
    int count = 1; // 计数，看一共有多少节点。

    // 找到尾结点，让尾结点指向头结点
    while (dummy->next != nullptr)
    {
      count++;
      dummy = dummy->next;
    }

    dummy->next = head; // 尾结点指向头结点
    for (int i = 0; i < count - k % count; i++)
    // k % count k可能大于节点总数
    // count - k % count 头结点右移动的位数
    // 为什么不是i<k 是因为k是头结点左移的位数，count - k%count 就是右移的位数
    {
      dummy = dummy->next;
    }
    head = dummy->next;
    dummy->next = nullptr;
    return head;
  }
};

int main()
{
  return 0;
}