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

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    while(secondHead != NULL)
    {
        Node* temp=firstHead;
        while(temp != NULL)
        {
            if(temp==secondHead)
               return secondHead;

            temp=temp->next;
        }
        secondHead=secondHead->next;
    }
    return nullptr;
}
