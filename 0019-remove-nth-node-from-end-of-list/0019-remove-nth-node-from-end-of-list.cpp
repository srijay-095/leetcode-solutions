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
ListNode* rev(ListNode* head)
{
    ListNode* temp=head;
    ListNode* prev =NULL;
    ListNode* front=temp;
    while(temp)
    {
        front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
   

    return prev;
}
ListNode* del(ListNode* head,int n)
{
    if(n==1)
    {
        
        ListNode* temp=head;
        head=head->next;
        temp->next=NULL;
        delete(temp);
        return head;

    }
    int c=1;
    ListNode* temp=head;
    ListNode* prev=NULL;
    ListNode* front=temp->next;
    while(temp)
    {
        if(c==n)
        {
            prev->next=temp->next;
            temp->next=NULL;
            delete(temp);
            return head;
        }
        else
        {
            c++;
            
            prev=temp;
            temp=temp->next;
           
        }
    }
    return head;
}
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        head=rev(head);
        head=del(head,n);
        head=rev(head);
   return head;
        
    }
};