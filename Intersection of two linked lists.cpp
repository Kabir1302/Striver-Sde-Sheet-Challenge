#include<bits/stdc++.h>
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
    Node* first=firstHead;
    Node* second=secondHead;
    unordered_set<Node*>s1;
    while(first)
    {
        s1.insert(first);
        first=first->next;
    }
    while(second)
    {
        if(s1.find(second)!=s1.end())
        {
            return second;
        }
        second=second->next;
    }
    return NULL;
}
