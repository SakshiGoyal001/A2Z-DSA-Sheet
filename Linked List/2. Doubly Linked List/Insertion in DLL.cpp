void addNode(Node *head, int pos, int data)
{
   // Your code here
   Node *temp=head;
   int i=0;
   
   while(i!=pos && temp->next!=NULL){
       temp=temp->next;
       i++;
   }
   Node* insert=new Node(data);
   insert->next=temp->next;
   insert->prev=temp;
   temp->next=insert;
   if (insert->next != nullptr) {
       insert->next->prev = insert;
   }
   
}
