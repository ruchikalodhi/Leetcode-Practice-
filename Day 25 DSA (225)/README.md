**🧱 Problem: 225. Implement Stack using Queues**

Difficulty: **Easy**

Topic: **Stack, Queue, Design**

Language: **C++**

------------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description**

Design a stack using only standard queue operations (push, pop, peek, empty). Your stack should support the usual operations: push, pop, top, and empty.

------------------------------------------------------------------------------------------------------------------------------

**🚀 Approach (Costly Pop/Top)**

~ I used two queues to simulate a LIFO stack.

~ push(x) is efficient — it simply enqueues the element.

~ For both pop() and top(), I transfer all elements except the last from the main queue to a temporary one to access the "top" of the stack.

~ After retrieving or removing the top element, I move everything back to the original queue to maintain order.

This version is simple but comes with a trade-off: pop() and top() are O(n) operations due to the repeated transfer of elements.

------------------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity:**
(format -> Operation - 	Time)

push(x)	- O(1)

pop()	- O(n)

top()	- O(n)

empty()	 - O(1)

------------------------------------------------------------------------------------------------------------------------------

**🧠 Space Complexity:**

O(n) — for storing up to n elements across two queues
