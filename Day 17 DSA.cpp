#include <stack>
#include <climits> // needed for INT_MAX
using namespace std;

class MinStack {
public:
    MinStack() {
        minValuesStack.push(INT_MAX);
    }
    void push(int val) {
        mainStack.push(val);
        minValuesStack.push(std::min(val, minValuesStack.top()));
    }
    void pop() {
        mainStack.pop();
        minValuesStack.pop();
    }
    int top() {
        return mainStack.top();
    }
    int getMin() {
        return minValuesStack.top();
    }

private:
    stack<int> mainStack;
    stack<int> minValuesStack;
};