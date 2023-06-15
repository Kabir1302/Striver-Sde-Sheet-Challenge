/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    int carry;
    Node* head=new Node();
    Node* temp=head;

    while(num1 != NULL && num2 != NULL)
    {
        int sum=num1->data+num2->data+carry;
        carry=sum/10;
        temp->next=new Node(sum%10);
        num1=num1->next;
        num2=num2->next;
        temp=temp->next;
    }
    while(num1 != NULL)
    {
        int sum=num1->data+carry;
        carry=sum/10;
        temp->next=new Node(sum%10);
        num1=num1->next;
        temp=temp->next;
    }

    while(num2 != NULL)
    {
        int sum=num2->data+carry;
        carry=sum/10;
        temp->next=new Node(sum%10);
        num2=num2->next;
        temp=temp->next;
    }
    if(carry != 1)
    {
        return head->next;
    }
    else
    {
        temp->next=new Node(1);
        return head->next;
    }
}
