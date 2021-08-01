class MyQueue {
public:
    stack<int> s, b;
    int front;
    /** Initialize your data structure here. */
    MyQueue() {
        front = 0;
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        if (s.empty()) front = x;
        s.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
         if (b.empty()) {
            while(!s.empty()) {
                b.push(s.top());
                s.pop();
            }
        }
        
        int a = b.top();
        b.pop();
        return a; 
    }
    
    /** Get the front element. */
    int peek() {
        if (!b.empty()) return b.top();
        return front;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if (s.empty() && b.empty()) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */