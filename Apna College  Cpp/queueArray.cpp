#include <iostream>
using namespace std;
#define n 20
class queue {
    int front;
    int back;
    int *arr;

    public:
    queue() {
        front=-1;
        back=-1;
        arr = new int[n];
    }

    void push(int val) {
        if(back==n-1) {
            cout << "Queue is full" << endl;
            return;
        }
        back++;
        arr[back]=val;

        if(front==-1) {
            front++;
        }
    }

    void pop() {
        if(front > back || front==-1) {
            cout << "No element in queue" << endl;
            return;
        }
        front++;
    }

    int peek() {
        if(front > back || front==-1) {
            cout << "No element in queue" << endl;
            return -1;
        }
        return arr[front];
    }

    bool empty() {
        if(front > back || front==-1) {
            return true;
        }
        else return false;
    }
};

int main() {
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();

    cout << q.empty()

    return 0;
}