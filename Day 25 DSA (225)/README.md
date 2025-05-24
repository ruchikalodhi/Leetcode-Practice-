**🧱 Problem: 225. Implement Stack using Queues**

Difficulty: **Easy**

Topic: **Stack, Queue, Design**

Language: **C++**

------------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description**

Design a stack using only standard queue operations (push, pop, peek, empty). Your stack should support the usual operations: push, pop, top, and empty.

------------------------------------------------------------------------------------------------------------------------------

***CODE 1 APPROACH AND TIME AND SPACE COMPLEXITY***

**Approach**
 
~ I used two queues to implement the stack.

~ The idea is to always keep the newest element at the front of the main queue (mq) so that pop() and top() can be performed in O(1) time.

~ To achieve this, every push(x) places the new element into the temporary queue (tq) and transfers all old elements from mq into tq.

~ Finally, I swap mq and tq to restore stack order.

This makes the push() operation O(n) but allows pop() and top() to be very fast.

------------------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity:**
Operation	Time

push(x)	O(n)

pop()	O(1)

top()	O(1)

empty()	O(1)

------------------------------------------------------------------------------------------------------------------------------

**🧠 Space Complexity:**

O(n) — Two queues storing up to n elements

------------------------------------------------------------------------------------------------------------------------------

***CODE 2 APPROACH AND TIME AND SPACE COMPLEXITY***

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
------------------------------------------------------------------------------------------------------------------------------

![Screenshot 2025-05-25 002347](https://github.com/user-attachments/assets/e01beb27-9900-41f7-ab95-11fb70c2b8e4)

