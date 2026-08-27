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
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* curr=slow->next;
        slow->next=nullptr;
        ListNode* prev=nullptr;
        ListNode* next=nullptr;
        while(curr!=nullptr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode *second=prev;
        ListNode *first1= head;
        while(second!=nullptr){
            ListNode* temp1=first1->next;
            ListNode* temp2=second->next;
             first1->next=second;
             second->next=temp1;
             first1=temp1;
             second=temp2;
        }
    }
};
