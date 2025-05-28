**🔍 Problem: 215. Kth Largest Element in an Array**

Difficulty: Medium

Topic: Heap / Priority Queue

Language: C++

---------------------------------------------------------------------------------------------------------------------------

**📄 Problem Description** ~ 
Given an integer array nums and an integer k, return the kth largest element in the array. 
Note that it is the kth largest element in sorted order, not the kth distinct element.

---------------------------------------------------------------------------------------------------------------------------

**🚀 Approach (Min-Heap using Priority Queue)**

~ I used a min-heap to keep track of the k largest elements seen so far.

~ For each element in the array, I pushed it into the heap.

~ If the size of the heap exceeds k, I popped the smallest element (top of the heap).

~ After processing all elements, the top of the min-heap is the kth largest element.

This method is efficient and leverages the properties of heaps to maintain a size-k subset of the largest elements.

---------------------------------------------------------------------------------------------------------------------------

**⏱ Time Complexity: O(n log k)**

Each insertion and removal in the heap takes log k time, and we do this n times.

**💾 Space Complexity: O(k)**

The heap stores at most k elements at any point.

---------------------------------------------------------------------------------------------------------------------------
