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
    ListNode* middleNode(ListNode* head) {
        if(head->next==NULL) return head;
        ListNode* temp=head;
        int c=0;
        while(temp)
        {
            c++;
            temp=temp->next;
        }
        
        if(c%2==1)
        {
            int cnt=0;
        ListNode* t=head;
        while(t)
        {
            cnt++;
            if(cnt==((c+1)/2))
            {
                return t;
            }
            t=t->next;
        }
        }
        int cnt=0;
        ListNode* t=head;
        while(t)
        {
            cnt++;
            if(cnt==((c/2)+1))
            {
                return t;
            }
            t=t->next;
        }
        return head;
       

    }
};