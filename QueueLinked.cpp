//--------------------------------------------------------------------
//
//  Laboratory 7                                       QueueLinked.cpp
//
//  ** SOLUTION: Linked list implementation of the Queue ADT **
//
//--------------------------------------------------------------------

#ifndef QUEUELINKED_CPP
#define QUEUELINKED_CPP

#include <iostream>

#include "QueueLinked.h"

//--------------------------------------------------------------------

template <typename DataType>
QueueLinked<DataType>::QueueNode::QueueNode(const DataType& newDataItem,
					  QueueLinked<DataType>::QueueNode* nextPtr)

// Creates a queue node containing data item nodeDataItem and next
// pointer nextPtr.

{
}

//--------------------------------------------------------------------

template <typename DataType>
QueueLinked<DataType>::QueueLinked(int maxNumber) : front(0), back(0) 

// Creates an empty queue. Parameter is provided for compatability
// with the array implementation and is ignored.

{}
 
//--------------------------------------------------------------------

template <typename DataType>
QueueLinked<DataType>::~QueueLinked() 

// Frees the memory used by a queue.

{
    clear();
}

//--------------------------------------------------------------------

template <typename DataType>
void QueueLinked<DataType>::enqueue(const DataType& newDataItem) throw (logic_error) 

// Inserts newDataItem at the rear of a queue.

{
    if (isFull()) {
	throw logic_error("push() while queue full");
    }

    QueueNode* temp = new QueueNode(newDataItem, 0);
    //insert code here
}

template <typename DataType>
DataType QueueLinked<DataType>::dequeue() throw (logic_error) 

// Removes the least recently (front) element from a queue and
// returns it.

{
    if (isEmpty()) {
	throw logic_error("dequeue() while queue empty");
    }

    DataType temp = front->dataItem;
    //insert  code here

    return temp;
}

//--------------------------------------------------------------------

template <typename DataType>
void QueueLinked<DataType>::clear() 

// Removes all the elements from a queue.

{
    //insert code here
}

//--------------------------------------------------------------------

template <typename DataType>
bool QueueLinked<DataType>::isEmpty() const 

// Returns true if a queue is empty. Otherwise, returns false.

{
    return front == 
}

//--------------------------------------------------------------------

template <typename DataType>
bool QueueLinked<DataType>::isFull() const 

// Returns true if a queue is full. Otherwise, returns false.
// The main reason it is included in the linked implementation is for
// operation compatibility with the array-based implementation.

{
    // Implementation option #1. Not always true, but probably good 
    // enough for our purposes.
    return false;

    /*
    // Implementation option #2.
    // This is a ugly and clumsy way to test if the list is full.
    // If a node can be successfully allocated than the list is not
    // full.  If the allocation fails it is implied that there is no
    // more free memory therefore the list is full.
    QueueNode<DT> *p;
    DT junk;

    try
    {
        p = new QueueNode<DT>(junk, 0);
    }
    catch ( bad_alloc &e )
    {
        return true;
    }

    delete p;
    return false;
    */
}

//--------------------------------------------------------------------

template < typename DataType >
void QueueLinked<DataType>:: showStructure () const

// Linked list implementation. Outputs the elements in a queue. If
// the queue is empty, outputs "Empty queue". This operation is
// intended for testing and debugging purposes only.

{
    QueueNode* p;   // Iterates through the queue

    if ( isEmpty() )
	cout << "Empty queue" << endl;
    else
    {
	cout << "Front\t";
	for ( p = front ; p != 0 ; p = p->next )
	{
	    if( p == front ) 
	    {
		cout << "[" << p->dataItem << "] ";
	    }
	    else
	    {
		cout << p->dataItem << " ";
	    }
	}
	cout << "\trear" << endl;
    }
}

//--------------------------------------------------------------------
// Programming Exercise 2
//--------------------------------------------------------------------

template <typename DataType>
void QueueLinked<DataType>::putFront(const DataType& newDataItem) throw (logic_error) 

//  Enqueues newDataItem at the front of the queue --
//  deque behavior -- instead of at the back as would normally happen.

{
    if (isFull()) {
	throw logic_error("putFront() while queue full");
    }

   
}

//--------------------------------------------------------------------

template <typename DataType>
DataType QueueLinked<DataType>::getRear() throw (logic_error) 

//  Removes and returns the dataItem at the rear of the queue --
//  deque behavior -- instead of at the head as would normally happen.

{
    if (isEmpty()) {
	throw logic_error("getRear() while queue empty");
    }

}

//--------------------------------------------------------------------
// Programming Exercise 3
//--------------------------------------------------------------------

template <typename DataType>
int QueueLinked<DataType>::getLength() const 

//  Calculates and returns the length of the queue.

{
    int total = 0;


    return total;
}

#endif		// #ifndef QUEUELINKED_CPP

