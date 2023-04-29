#include <bits/stdc++.h> 
class Queue {

public:

    int *arr;
    int size;
    int qfront, rear;

    Queue() {
        // Implement the Constructor
        size = 10001;
        arr = new int[size];
        qfront=0; rear= 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(rear == 0)
        return true;
        else if(rear == qfront)
        return true;

        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        arr[rear] = data;
        rear++;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(qfront == rear)
        {
            qfront = 0;
            rear = 0;
            return -1;
        }

        int ans = arr[qfront];
        qfront++;
        return ans;
    }

    int front() {
        // Implement the front() function
        if(rear == 0)
        return -1;
        else if(qfront == rear)
        return -1;

        return arr[qfront];
    }
};
