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
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        if(h1==NULL || h2==NULL) return NULL;

        ListNode* t1=h1;
        ListNode* t2=h2;
        while(t1)
        {
            t2=h2;
            while(t2)
            {
                if(t1==t2)
                {
                    return t2;
                }
                else t2=t2->next;
            }
            t1=t1->next;
        }
        return NULL;
        
    }
};