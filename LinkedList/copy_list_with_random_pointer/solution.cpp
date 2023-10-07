/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr) return nullptr;
        map<Node*,Node*> map;
        Node *temp =head;
        Node *freshListHead=new Node(0);
        Node *freshListPointer=freshListHead;
        while(temp!=nullptr){
            Node* node =new Node(temp->val);
            freshListPointer->next=node;
            map[temp]=node;
            freshListPointer=freshListPointer->next;
            temp=temp->next;
        }
        temp=head;
        freshListPointer=freshListHead->next;
        while(temp!=nullptr){
            freshListPointer->random=map[temp->random];
            temp=temp->next;
            freshListPointer=freshListPointer->next;
        }
        return freshListHead->next;
    }
};