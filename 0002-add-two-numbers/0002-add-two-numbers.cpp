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
        ListNode* d=new ListNode(-1);
        ListNode* tail=d;
        ListNode* t1=l1;
        ListNode* t2=l2;
        int c=0;
        int s;
        while(t1 || t2 || c!=0)
        {
            s=0;
            if(t1)
            {
            
                s+=t1->val;
            }
                if(t2)
                {
                    s+=t2->val;
                }
                s+=c;
                ListNode* temp=new ListNode(s%10);
                tail->next=temp;
                tail=temp;

               
                c=s/10;
                if(t1 )t1=t1->next;
                if(t2 )t2=t2->next;

            
        }
        return d->next;
        
        
    }
};