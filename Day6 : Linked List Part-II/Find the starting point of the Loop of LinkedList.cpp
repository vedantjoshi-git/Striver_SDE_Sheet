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
    ListNode *detectCycle(ListNode *head) {
        int count = 0;
        if(head == NULL || head->next == NULL)
        {
            return NULL;
        }

        ListNode *p = head;
        ListNode *q = head;
        ListNode *entry = head;
        
        while(p->next != NULL && p->next->next != NULL)
        {
            p = p->next->next;
            q = q->next;
            if(p == q)
            {
                while(q != entry)
                {
                    q = q->next;
                    entry = entry->next;
                }
                return entry;
            }
        }
        return NULL;
    }
};
