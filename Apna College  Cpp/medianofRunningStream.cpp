#include <iostream>
#include <queue>
#include <vector>
using namespace std;

priority_queue<int, vector<int>> maxHeap;
priority_queue<int, vector<int>, greater<int>> minHeap;

void addNum(int num)
{
    if (maxHeap.size() == minHeap.size())
    {
        if (maxHeap.size() == 0)
        {
            maxHeap.push(num);
            return;
        }

        if (num < minHeap.top())
        {

            maxHeap.push(num);
        }
        else
        {
            minHeap.push(num);
        }
    }
    else
    {
        if (maxHeap.size() > minHeap.size())
        {
            if (num >= maxHeap.top())
            {
                minHeap.push(num);
            }
            else
            {
                int temp = maxHeap.top();
                maxHeap.pop();
                maxHeap.push(num);
                minHeap.push(temp);
            }
        }
        else
        {
            if (num <= minHeap.top())
            {
                maxHeap.push(num);
            }
            else
            {
                int temp = minHeap.top();
                minHeap.pop();
                minHeap.push(num);
                maxHeap.push(temp);
            }
        }
    }
}

double findMedian() {
    if(maxHeap.size() == minHeap.size()) {
        return (maxHeap.top() + minHeap.top())/2.0;
    }
    else if(maxHeap.size() > minHeap.size()) {
        return maxHeap.top();
    }
    else {
        return minHeap.top();
    }
}

int main()
{
    addNum(10);
    cout << findMedian() << endl;
    addNum(15);
    cout << findMedian() << endl;
    addNum(21);
    cout << findMedian() << endl;
    addNum(30);
    cout << findMedian() << endl;
    addNum(18);
    cout << findMedian() << endl;
    addNum(19);
    cout << findMedian() << endl;
    return 0;
}