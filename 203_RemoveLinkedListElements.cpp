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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev;					
		while(head != nullptr && head->val == val) { 
				prev = head;
				head = head->next;    
				delete prev;
		}
		ListNode* next = head;
		
		while(next && next->next)
		{
			if(next->next->val == val)
			{         
				prev = next->next;
				next->next = next->next->next;
				delete prev;

			}
		    else
				next = next->next;
		}
		return head;
    }
};