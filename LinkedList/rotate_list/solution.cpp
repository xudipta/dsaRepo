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
    int findLen(ListNode* head){
        ListNode* slow=head;
        int count=0;
        while(slow!=nullptr){
            count++;
            slow=slow->next;
        }
        return count;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr) return head;
        int len=findLen(head);
        k=k%len;
        if(k==0)return head;
        cout<<k;
        ListNode* newHead=head;
        ListNode* fast=head;
        while(k>0){
            fast=fast->next;
            k--;
        }
        while(fast!=nullptr){
            newHead=newHead->next;
            fast=fast->next;
        }
        ListNode* temp=newHead;
        while(temp!=nullptr){
            if(temp->next==nullptr) break;
            temp=temp->next;
        }
        temp->next=head;
        while(temp->next!=newHead){
            temp=temp->next;
        }
        temp->next=nullptr;
        return newHead;
    }
};