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
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* forlen=head;
        int count=0;
        while(forlen!=nullptr){
            forlen=forlen->next;
            count++;
        }
        int group=count/k;
        int rem=count%k;
        ListNode* result=new ListNode(0);
         ListNode* ans=result;
        ListNode* dum=head;
        bool t=true;
        for(int j=0;j<group;j++){
            ListNode* temp1=new ListNode(0);
            ListNode* temp=temp1;
            for(int i=0;i<k;i++){
                temp->next=new ListNode(dum->val);
                temp=temp->next;
                dum=dum->next;
            }
            temp1=temp1->next;
            ListNode* pre=nullptr;
            ListNode* curr=temp1;
            ListNode* next=nullptr;
            while(curr!=nullptr){
                next=curr->next;
                curr->next=pre;
                pre=curr;
                curr=next;
            }
            while(pre!=nullptr){
                ans->next=new ListNode(pre->val);
                ans=ans->next;
                pre=pre->next;
            }
        }

        if(rem!=0){
            while(dum!=nullptr){
                ans->next=new ListNode(dum->val);
                ans=ans->next;
                dum=dum->next;
            }
        }
        return result->next;
    }
};
