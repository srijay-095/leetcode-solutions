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
ListNode* convert(vector<int> arr)
{
    ListNode* head=new ListNode(arr[0],nullptr);
    ListNode* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        ListNode* temp=new ListNode(arr[i],nullptr);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        vector<int> nums;
        ListNode* temp=head;
        while(temp)
        {
            nums.push_back(temp->val);
            temp=temp->next;
        }
        reverse(nums.begin(),nums.end());
        head=convert(nums);
    return head;
    }
};