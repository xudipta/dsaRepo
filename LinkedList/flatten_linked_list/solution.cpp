Node* merge(Node *start, Node *end){
    Node *dummy=new Node(0);
    Node *temp = dummy;
    while(start!= nullptr && end!=nullptr){
        if(start->data<end->data){
                dummy->bottom=start;
                start=start->bottom;
            }else{
                dummy->bottom=end;
                end=end->bottom;
            }
        dummy=dummy->bottom;
    }
    if(start!=nullptr){
        dummy->bottom=start;
    }
    if(end!=nullptr){
        dummy->bottom=end;
    }
    return temp->bottom;
}
Node *flatten(Node *root)
{
   if(root==nullptr || root->next==nullptr) return root;
   root->next=flatten(root->next);
   return merge(root,root->next);
}