#include <queue>
using namespace std;

class MyStack {
public:
    void push(int x) {
        tq.push(x);
        while (!mq.empty()) {
            tq.push(mq.front());
            mq.pop();
        }
        swap(mq, tq);
    }

    int pop() {
        int t = mq.front();
        mq.pop();            //forgot to pop the element 
        return t;
    }

    int top() {
        return mq.front();
    }

    bool empty() {
        return mq.empty();
    }

private:
    queue<int> mq;  // mainQueue
    queue<int> tq;  // temporaryQueue
};
