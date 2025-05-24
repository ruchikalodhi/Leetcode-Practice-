#include <queue>
using namespace std;

class MyStack {
public:
    void push(int x) {
        q.push(x);
    }

    int pop() {
        while (q.size() > 1) {
            tmp.push(q.front());
            q.pop();
        }
        int res = q.front();
        q.pop();
        while (!tmp.empty()) {
            q.push(tmp.front());
            tmp.pop();
        }
        return res;
    }

    int top() {
        while (q.size() > 1) {
            tmp.push(q.front());
            q.pop();
        }
        int res = q.front();
        tmp.push(res);
        q.pop();
        while (!tmp.empty()) {
            q.push(tmp.front());
            tmp.pop();
        }
        return res;
    }

    bool empty() {
        return q.empty();
    }

private:
    queue<int> q;
    queue<int> tmp;
};
