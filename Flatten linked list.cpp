/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
Node* mergeLists(Node* head1,Node* head2)
{
	Node* head=new Node(0);
	Node* temp=head;
	while(head1 != NULL && head2 != NULL)
	{
		if(head1->data<head2->data)
		{
			temp->child=head1;
			head1=head1->child;
			temp=temp->child;
		}
		else
		{
			temp->child=head2;
			head2=head2->child;
			temp=temp->child;
		}
	}
	while(head1 != NULL)
	{
		temp->child=head1;
		head1=head1->child;
		temp=temp->child;
	}
	while(head2 != NULL)
	{
		temp->child=head2;
		head2=head2->child;
		temp=temp->child;
	}
	return head->child;
}
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	Node* head1=flattenLinkedList(head->next);
	head->next=NULL;
	Node* newhead=mergeLists(head,head1);
	return newhead;
}


