#include <bits/stdc++.h> 
class Queue {
public:
    vector<int>v;
    Queue() {
        // Implement the Constructor
       
        
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return (v.size()==0);
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        v.push_back(data);
        
    }

    int dequeue() {
        // Implement the dequeue() function
        if(v.size()==0)
           return -1;
        else
        {
            int ele=v[0];
            v.erase(v.begin()+0);
            return ele;
        }
    }

    int front() {
        // Implement the front() function
        if(v.size()==0)
           return -1;
        
        return v[0];
    }
};
