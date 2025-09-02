#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
    stack<int>s1;
    stack<int>s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int data = s1.top();
        s1.pop();
        return data;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
    }
};

int main(){
    MyQueue q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout << q.peek() << " ";
        q.pop();
    }
    return 0;
}