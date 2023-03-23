class Node{
    public:
    int data;
    Node* next;
}
//insertion of a new node at the beginning of the linked list
void push(Node** head_ref, int new_data){
    Node* new_node = new node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
void insertAfter(Node* prev_node, int new_data){
    if(prev_node==NULL){
        cout<<"The given previous node cannot be null";
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;

}
void append(Node** head_ref, int new_data){
    Node* new_node = new Node();
    Node *last = *head_ref;
    
}