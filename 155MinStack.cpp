#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// TC O(1) SC O(n)
class MinStack {
public:
    stack<pair<int, int>> s;
    MinStack() {}
    
    void push(int val) {
        if(s.empty()){
            s.push({val, val});
        } else {
            int minVal = min(val, s.top().second);
            s.push({val, minVal});
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

// TC O(1) SC O(1)
class MinStack2 {
public:
    stack<long long int> s;
    long long int minVal;
    MinStack2() {}
    
    void push(int val) {
        if(s.empty()){
            s.push(val);
            minVal = val;
        }else{
            if(val < minVal){
                s.push((long long)2*val - minVal);
                minVal = val;
            }else{
                s.push(val);
            }
        }
    }
    
    void pop() {
        if(s.top() < minVal){
            minVal = 2*minVal - s.top();
        }
        s.pop();
    }
    
    int top() {
        if(s.top() < minVal){
            return minVal;
        }
        return s.top();
    }
    
    int getMin() {
        return minVal;
    }
};

int main() {
    MinStack st;

    st.push(5);
    st.push(2);
    st.push(8);
    st.push(1);

    cout << "Top element: " << st.top() << endl;    
    cout << "Minimum element: " << st.getMin() << endl; 

    st.pop();
    cout << "Top element after pop: " << st.top() << endl; 
    cout << "Minimum element after pop: " << st.getMin() << endl; 

    return 0;
}