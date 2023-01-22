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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = l1;
        
        while(l1)
        {
            if(l2) {
                l1->val += l2->val;
                if(!l1->next && l2->next)
                    l1->next = new ListNode();
                l2 = l2->next;
            }
            if(l1->val > 9) {
                l1->val %= 10;
                if(l1->next)
                    l1->next->val +=1;
                else
                    l1->next = new ListNode(1);
            }
            l1 = l1->next;
        }
        return head;
    }
};