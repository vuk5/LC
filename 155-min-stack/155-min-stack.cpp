class MinStack {
    stack<pair<long,long>> st;
    long long int mini;
public:
    MinStack() {
        mini=INT_MAX;
    }
    
    void push(int val) {
        if(st.empty()==true)st.push({val,val});
        else{
        auto it=st.top();
        if(it.second<val){
            st.push({val,it.second});
            //mini=val;
        }
        else st.push({val,val});
        }
    }
    
    void pop() {
       st.pop(); 
    }
    
    int top() {
        auto it=st.top();
        return it.first;
    }
    
    int getMin() {
        auto it=st.top();
        return it.second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */