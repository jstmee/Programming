
==Advantages of Linked Lists over arrays:
1.Dynamic Array.
2.Ease of Insertion/Deletion.

==Drawbacks of Linked Lists: 
1.It takes a lot of time in traversing and changing the pointers.
2.Reverse traversing is not possible in singly linked lists.
3.It will be confusing when we work with pointers.
4.Direct access to an element is not possible in a linked list as in an array by index.
5.Searching for an element is costly and requires O(n) time complexity.
6.Sorting of linked lists is very complex and costly.

==Types of Linked Lists:
1.Simple Linked List – In this type of linked list, one can move or traverse the linked list in only one direction. where the next pointer of each node points to other nodes but the next pointer of the last node points to NULL. It is also called “Singly Linked List”.

2.Circular Linked List – the last node of the linked list contains the link of the first/head node of the linked list in its next pointer.

2.Doubly Linked List – one can move or traverse the linked list in both directions (Forward and Backward)

3.Doubly Circular Linked List – A Doubly Circular linked list or a circular two-way linked list is a more complex type of linked list that contains a pointer to the next as well as the previous node in the sequence. The difference between the doubly linked and circular doubly list is the same as that between a singly linked list and a circular linked list. The circular doubly linked list does not contain null in the previous field of the first node.


Time Complexity	    Worst Case
Search	              O(n)
Insertion	          O(1)
Deletion	          O(1)