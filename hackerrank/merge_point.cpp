/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    Node *temp=new Node();
    temp=headB;
    while(headA!=NULL){
        while(temp!=NULL){
            if(headA==temp){
                return headA->data;
            }
            else{
                temp=temp->next;
            }
        }
        headA=headA->next;
        temp=headB;
    } 
    return 0;
}

