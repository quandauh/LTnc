void printLinkedList(SinglyLinkedListNode* head)
{

while(head!=null){
        cout<<head->data<<endl;
        head = head->next;
    }
}