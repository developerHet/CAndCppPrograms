#include <iostream>
using namespace std;

#define n 100

class Stack {
    int* arr;
    int top;

    public:
    Stack() {
        arr=new int[n];
        top=-1;
    }

    void push(int val) {
        if(top==n-1) {
            cout << "Stack is overflow" << endl;
            return;
        }
        top++;
        arr[top]=val;
    }

    void pop() {
        if(top==-1) {
            cout << "No element stack" << endl;
            return;
        }
        top--;
    }

    int Top() {
        if(top==-1) {
            cout << "No element in stack" << endl;
            return top;
        }
        return arr[top];
    }

    bool empty() {
        return top==-1;
    }
};

int main() {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty() << endl;
}