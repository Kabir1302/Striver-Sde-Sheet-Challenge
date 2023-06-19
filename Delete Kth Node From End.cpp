/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int k)
{
    // Write your code here.
    
    Node* temp=head;
    int s=0;
    while(temp != NULL)
    {
        temp=temp->next;
        s++;
    }
    if(k==s)
    {
        return head->next;
    }
    int n=s-k;
    Node* prev=NULL;
    Node* curr=head;
    while(n>0)
    {
        prev=curr;
        curr=curr->next;
        n--;
    }
    prev->next=curr->next;
    delete curr;
    return head;
}
