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
vector<int> convert(ListNode* head)
{
    vector<int> arr;
    ListNode* temp=head;
    while(temp)
    {
        arr.push_back(temp->val);
        temp=temp->next;
    }
    return arr;
}
bool p(vector<int> arr)
{
    vector<int> copy=arr;
    reverse(arr.begin(),arr.end());
    if(copy==arr) return true;
    return false;
}
    bool isPalindrome(ListNode* head) {
        vector<int> arr=convert(head);
        if(p(arr)==true) return true;
        return false;
        
    }
};