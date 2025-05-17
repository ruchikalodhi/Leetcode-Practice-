class MyQueue {
public:
    void push(int x) {
        inputStack.push(x);
    }
    int pop() {
        prepareOutputStack();
        int element = outputStack.top(); 
        outputStack.pop();               
        return element;                  
    }
    int peek() {
        prepareOutputStack();
        return outputStack.top(); 
    }
    bool empty() {
        return inputStack.empty() && outputStack.empty();
    }

private:
    stack<int> inputStack;  
    stack<int> outputStack; 
    void prepareOutputStack() {
        if (outputStack.empty()) {
            while (!inputStack.empty()) {
                outputStack.push(inputStack.top()); 
                inputStack.pop();           
            }
        }
    }
};