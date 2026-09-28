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
ListNode* findm(ListNode* head)
{
    ListNode* slow=head;
    ListNode* fast=head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
ListNode* merge2(ListNode* l,ListNode* r)
{
    ListNode* d=new ListNode(-1);
    ListNode* temp=d;
    ListNode* t1=l;
    ListNode* t2=r;
    while(t1!=NULL && t2!=NULL)
    {
        if(t1->val<=t2->val)
        {
            temp->next=t1;
            t1=t1->next;
            temp=temp->next;
        }
        else
        {
            temp->next=t2;
            t2=t2->next;
            temp=temp->next;
        }
    }
    if(t1==NULL && t2!=NULL)
    {
        temp->next=t2;

    }
    else if(t1!=NULL && t2==NULL)
    {
        temp->next=t1;
    }
    return d->next;
}
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* middle=findm(head);
        ListNode* r=middle->next;
        middle->next=NULL;
        ListNode* l=head;
        l=sortList(l);
        r=sortList(r);
        return merge2(l,r);
        
    }
};