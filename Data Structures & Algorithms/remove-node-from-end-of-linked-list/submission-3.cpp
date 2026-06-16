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

        ListNode* pre1=nullptr;
        ListNode* curr1=head;
        ListNode* next1=nullptr;
        while(curr1!=nullptr){
            next1=curr1->next;
            curr1->next=pre1;
            pre1=curr1;
            curr1=next1;
        }
        ListNode*ans=pre1;
        if(n==1){
            ans=ans->next;
        }
        else{
            ListNode* temp=ans;
            for(int i=1;i<n-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
        }
        ListNode* pre2=nullptr;
        ListNode* curr2=ans;
        ListNode* next2=nullptr;
        while(curr2!=nullptr){
            next2=curr2->next;
            curr2->next=pre2;
            pre2=curr2;
            curr2=next2;
        }
        return pre2;

    }
};
