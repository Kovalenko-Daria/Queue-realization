# Queue-realization

## About
This is a custom implementation of the queue data structure library with basic operations of initialization, adding, deleting an element and destroying the queue.
***

## Library

The queue is implemented as a structure that contains a dynamic array with elements and the amount of elements, which is called here "end".

* The initialization function accepts an element, creates a pointer to the queue, allocates memory in it for an array to store the received element, sets the end to one and returns a pointer to the queue.

* The push function adds a new element to the end of the queue, increasing the size of the array of elements and the end by one. It does't return anything.

* The pop function removes an element from the beginning of the queue, first checking that there are still elements in it and returns the value of the element if the queue is not empty and zero otherwise.

* The destroy function clears the memory allocated for the array of elements and for the queue structure itself.