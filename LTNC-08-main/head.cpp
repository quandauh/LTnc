struct node{
	int data;
	node *next;
	node *pre;
};
struct douList{
	node *head;
	node *tail;
};



douList *addHead(douList *l, int x){
	node *temp = new node;
	temp->data = x;
	temp->pre = NULL;
	temp->next = l->head;
	l->head->pre = temp;
	l->head = temp;
	return l;
}
