**🧮 Problem: 150. Evaluate Reverse Polish Notation**

Difficulty: **Medium**

Topic: Stack, **Expression Evaluation**

Language: **C++**

**📄 Problem Description** ~ 
Given a list of tokens representing a Reverse Polish Notation (RPN) expression, evaluate the expression and return its result.
RPN (postfix notation) is a mathematical notation in which every operator follows all of its operands

**🚀 Approach (First Person)**

~ I used a stack to store intermediate values while iterating through the tokens.

~ If the token was a number (including negative numbers), I converted it using stoi() and pushed it onto the stack.

~ If the token was an operator (+, -, *, /), I popped the top two values from the stack, performed the operation, and pushed the result back.

~ At the end, the stack contains the final result on top.
;';klkugl


**🕒 Time Complexity:**
O(n), where n is the number of tokens.


**🧠 Space Complexity:**
O(n), for the stack storing intermediate results.
