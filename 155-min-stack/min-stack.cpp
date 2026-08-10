class MinStack {
public:
    stack<long long >s;
    long long mini;

    MinStack() {
        mini=INT_MAX;
    }
    
    void push(int val) {
        if(s.empty()){
            mini=val;
            s.push(val);
        }else{
            if(val>=mini) s.push(val);
            else{
                s.push(2LL*val - mini);
                mini=val;
                }

        }
    }
    
    void pop() {
        if(s.empty()) return;
        long long n=s.top();
        s.pop();
        if(n<=mini){
            mini=2LL*mini - n;
        }
    }
    
    int top() {
         if(s.empty()) return -1;
         long long n=s.top();
         if(mini<=n) return n;
         return mini;
    }
    
    int getMin() {
        if(s.empty()) return -1;
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */