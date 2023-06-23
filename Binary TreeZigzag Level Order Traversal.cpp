#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    vector<int>res;
    if(root==NULL)
       return res;

    
    queue<BinaryTreeNode<int> *>q;
    q.push(root);
    int l=0;
    while(!q.empty())
    {
        
        int n=q.size();
        vector<int>temp;
        for(int i=0;i<n;i++)
        {
            BinaryTreeNode<int> *temp1=q.front();
            q.pop();
            temp.push_back(temp1->data);
            if(temp1->left)
            {
                q.push(temp1->left);
            }
            if(temp1->right)
            {
                q.push(temp1->right);
            }
          
        }
        if(l%2!=0)
        {
            reverse(temp.begin(),temp.end());
            
        }
        for(int i=0;i<n;i++)
        {
            res.push_back(temp[i]);
        }
        l++;
    }
    return res;

}
