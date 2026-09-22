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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int l=0;
        while(temp)
        {
            l++;
            temp=temp->next;
        }
        int m=l-n;
        int c=0;
        temp=head;
        ListNode* prev=NULL;

        while(temp)
        {
            if(m==0)
            {
                temp=head;
                head=head->next;
                temp->next=NULL;
                delete(temp);
                return head;
            }
            if(c==m)
            {
                prev->next=temp->next;
                
                delete(temp);
                return head;
            }
            prev=temp;
            temp=temp->next;
            c++;
        }
        return head;

        

    }
};