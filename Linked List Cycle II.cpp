/****************************************************************

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


*****************************************************************/

Node *firstNode(Node *head)
{
    //    Write your code here.
    Node* slow=head;
    Node* fast=head;

    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
        {
            break;
        }
    }

    if(fast==NULL || fast->next==NULL)
       return NULL;
    
    fast=head;
    while(fast != slow)
    {
        fast=fast->next;
        slow=slow->next;
    }

    return slow;
}
