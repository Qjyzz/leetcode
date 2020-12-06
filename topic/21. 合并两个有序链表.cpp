/*
将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 

 

示例：

输入：1->2->4, 1->3->4
输出：1->1->2->3->4->4
*/

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        ListNode* temp = head;
        while(l1 && l2) {
            if(l1->val > l2->val) {
                temp->next = l2;
                temp = temp->next;
                l2 = l2->next;
            } else {
                temp->next = l1;
                temp = temp->next;
                l1 = l1->next;
            }
        }
        if(l1) {
            temp->next = l1;
        }
        if(l2) {
            temp->next = l2;
        }
        return head->next;
    }
};