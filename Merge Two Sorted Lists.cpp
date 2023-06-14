#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* head=new Node<int>(0);
    Node<int>* res=head;
    while(first != NULL && second != NULL)
    {
        if(first->data < second->data)
        {
            res->next=first;
            first=first->next;
        }
        else
        {
            res->next=second;
            second=second->next;
        }
        res=res->next;
        
    }
    while(first != NULL)
    {
        res->next=first;
        first=first->next;
        res=res->next;
    }
    while(second != NULL)
    {
        res->next=second;
        second=second->next;
        res=res->next;
    }

    return head->next;
}
