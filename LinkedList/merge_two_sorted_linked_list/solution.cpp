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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* res=new ListNode();
        ListNode* ptr=res;
        while(list1!=nullptr && list2!=nullptr){
            ListNode* node= new ListNode();
            if(list1->val <= list2->val){
                node->val=list1->val;
                list1=list1->next;
            }else{
                node->val=list2->val;;
                list2=list2->next;
            }
            ptr->next=node;
            ptr=ptr->next;
        }
        while(list1!=nullptr){
            ListNode* node= new ListNode(list1->val);
            ptr->next=node;
            ptr=ptr->next;
            list1=list1->next;
        }
        while(list2!=nullptr){
            ListNode* node= new ListNode(list2->val);
            ptr->next=node;
            ptr=ptr->next;
            list2=list2->next;
        }
        return res->next;
    }
};