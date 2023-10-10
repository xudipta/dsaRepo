/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int alen=0,blen=0;
        ListNode *t=headA;
        while(t!=nullptr){
            t=t->next;
            alen++;
        }
        t=headB;
        while(t!=nullptr){
            t=t->next;
            blen++;
        }
        ListNode *a, *b;
        a=headA;
        b=headB;
        if(alen>blen){
            while(alen-blen>0){
                a=a->next;
                alen--;
            }
        }else{
            while(blen-alen>0){
                b=b->next;
                blen--;
            }
        }
        while(a!=nullptr && b!=nullptr){
            if(a==b)
                return a;
            a=a->next;
            b=b->next;
        }
        return nullptr;
    }
};