#include <iostream>
#include <stack>
using namespace std;

class queue {
    stack<int> s1;
    stack<int> s2;

    public:
    void push(int val){
        s1.push(val);
    }

    int pop() {
        if(s1.empty() && s2.empty()) {
            cout << "Queue is empty" <<endl;
            return -1;
        }

        if(s2.empty()) {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int val=s2.top();
        s2.pop();
        return val;
    }

    int recpop() {
        if(s1.empty()) {
            cout << "Queue is empty" <<endl;
            return -1;
        }
        int topVal = s1.top();
        s1.pop();
        if(s1.empty()) {
            return topVal;
        }
        int x = recpop();
        s1.push(topVal);
        return x;
    }

    bool empty() {
        if(s1.empty()) {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    //cout << q.peek() << endl;
    cout << q.recpop() << endl;
    //cout << q.peek() << endl;
    cout << q.recpop() << endl;
    //cout << q.peek() << endl;
    cout << q.recpop() << endl;
    //cout << q.peek() << endl;
    cout << q.recpop()<< endl;

    cout << q.empty();

    return 0;
}