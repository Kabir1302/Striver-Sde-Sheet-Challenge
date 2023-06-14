#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    vector<int>temp;
    while(head != NULL)
    {
        temp.push_back(head->data);
        head=head->next;
    }
    vector<int>rev=temp;
    reverse(rev.begin(),rev.end());
    for(int i=0;i<temp.size();i++)
    {
        if(temp[i]!=rev[i])
        {
            return false;
        }
    }
    return true;

}
