/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        /*if(head == NULL || head->next == NULL) // solution 1
            return head;
        
        ListNode *pre = NULL, *next = NULL;
        while(head != NULL)
        {
            next = head->next;
            head->next = pre;
            pre = head;
            head = next;
        }
        
        return pre;*/
        
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode *newHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
};
