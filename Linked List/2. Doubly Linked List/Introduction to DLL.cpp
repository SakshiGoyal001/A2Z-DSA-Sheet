class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        // code here
        int i=1;
        Node* head= new Node(arr[0]);
        Node* temp=head;
        double n = arr.size() ;
        
       while(i<n){
           Node* temp2=new Node(arr[i]);
           temp->next=temp2;
           temp2->prev=temp;
           temp=temp->next;
           temp2=temp2->next;
           i++;
       }
        return head;
        
    }
};
