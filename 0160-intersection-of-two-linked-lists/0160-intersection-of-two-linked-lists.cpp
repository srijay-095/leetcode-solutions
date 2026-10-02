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
        ListNode* t1=h1;
        ListNode* t2=h2;
        if(h1==NULL || h2==NULL) return NULL;
        while(t1!=t2)
        {
           if(t1==NULL) t1=h2;
           else t1=t1->next;
           if(t2==NULL) t2=h1;
           else t2=t2->next;
           
            
        }
        return t1;

        
    }
};