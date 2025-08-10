/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* cur = dummy;
        while(cur->next && cur->next->next){
            ListNode* tmp1 = cur->next;
            ListNode* tmp2 = cur->next->next;
            ListNode* tmp3 = cur->next->next->next;
            cur->next = tmp2;
            tmp2->next = tmp1;
            tmp1->next = tmp3;
            cur = tmp1;
        }
        return dummy->next;
    }
};
// @lc code=end

