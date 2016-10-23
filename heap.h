# Trying to implement minimum heap data structure
#ifndef HEAP_H
#define HEAP_H
#include <limits.h>

# Suppose heap will have capacity of 1k elements
int min_heap(1000), min_heapSize;

# Initializing empty heap
void min_heap_init(void)
{
	min_heapSize = 0;
	min_heap[0] = INT_MIN;
}

void min_heap_insert(int elem)
{
	min_heapSize++;
	min_heap[min_heapSize] = elem;
	int index = min_heapSize;
	/* if parent is bigger than new element then swap them to restore 
	   the min_heap property.*/
	while(min_heap[index/2] > elem;
	{
		min_heap[index] = min_heap[index/2];
		index = (index/2);
	}
	min_heap[index] = elem;
}

int min_heap_delete(void)
{
	int minElement,lastElement,child,index;
	/* the root node at min_heap starts from 1 index.*/
	minElement = min_heap[1];
	lastElement = min_heap[min_heapSize-1];
	for(index = 1;index*2 <= min_heapSize;index = child)
	{
		child = index*2;
		if(child != min_heapSize && min_heap[child+1] < min_heap[child])
			child++;
		if(lastElement > min_heap[child])
			min_heap[index] = min_heap[child];
		else
			break;
	}
	min_heap[index] = lastElement;
	return minElement;
}
#endif
