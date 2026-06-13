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
    ListNode* reverseList(ListNode* head) {
        ListNode* res=new ListNode(0);
        ListNode* dummy=res;
        ListNode* temp=head;
        vector<int>arr;
        while(temp!=nullptr){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=arr.size()-1;i>=0;i--){
            dummy->next=new ListNode(arr[i]);
            dummy=dummy->next;
        }
        return res->next;
    }
};
