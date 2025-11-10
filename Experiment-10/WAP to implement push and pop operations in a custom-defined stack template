#include<iostream>
using namespace std;

template <class T> class stack {
    T arr[10]; 
    int top;
public:
    stack () {
        top = -1;
    }
    
    void push(T val) {
        if(top == 9) {
            cout << "Error: Stack Overflow" << endl;
            return;
        }
        arr[++top] = val;
        cout << "Pushed " << val << " on stack." << endl;
    }
    
    void pop() {
        if(top == -1) {
            cout << "Error: Stack Underflow" << endl;
            return;
        }
        T val = arr[top--]; 
        cout << "Popped " << val << " from stack." << endl;
    }
    
    void trav() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack Elements (Bottom to Top): ";
        
        for(int i = 0; i <= top; i++) {
            cout << arr[i];
            if(i < top) { cout << " -> "; }
        }
        cout << endl;
    }
};

int main() {
    stack<int>st; 
    st.push(21);
    st.push(31);
    st.push(57);
    st.pop(); 
    st.push(67);
    st.push(69);
    st.push(74);
    st.pop(); 
    st.push(81);
    st.push(94);
    st.push(98);
    st.push(100);
    st.pop(); 
    cout << "\n--- Final Traversal ---\n";
    st.trav(); 
    return 0;
}
