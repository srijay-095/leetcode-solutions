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
        ListNode* node=head;
        ListNode* temp=head;
        int c=n;
        
        while(c>0)
        {
            temp=temp->next;
            c--;
        }
        if(temp == NULL)
        {
            head = head->next;
            delete node;
            return head;
        }

        ListNode* prev=NULL;
        while(temp)
        {
            prev=node;
            node=node->next;
            temp=temp->next;

        }
        prev->next=node->next;
        delete(node);
        return head;

        
    }
};