/***********************************************************************
Author:        Mackenzie Edmonds
Class:         C243 Data Structures
File Name:     Queue.cc
Description:   Implementation file of a class queue derived from a list
***********************************************************************/
#include <iostream>
#include <cstdlib>
using namespace std;

#include "Queue.h"

//Default constructor: creates an empty queue
Queue::Queue() : List()
{
}//Queue::Queue()

//Insert an object into the queue
void Queue::enqueue(int data)
{
    insertBack(data);
}//Queue::enqueue()

//Remove the front object and return its value
int Queue::dequeue()
{
    if (isEmpty())
    {
        cout << "attempt to acces the front of an empty queue" << endl;
        exit (1);
    }
    else 
    {
        int top = front();
        removeFront();
        return top;
    }

}// Queue::dequeue()

//Inspect the value of the front object
int Queue::front()
{
    if (!isEmpty())
        return *begin();
    else
    {
        cout << "attempt to access the front of an empty queue" << endl;
        exit (1);
    }
}//Queue::front()

//Delete all objects in the queue
void Queue::makeEmpty()
{
    List::makeEmpty();
}//Queue::makeEmpty()

//Test if the queue is empty
bool Queue::isEmpty()
{
    // return !(List)(*this)
    return List::isEmpty();
}//Queue::isEmpty()

//Concatenate two queues
void Queue::concatenate(Queue &other)
{
    List::concatenate(other);
}// Queue::concatenate()

//The number of objects in the queue
int Queue::stored()
{
    return getSize();
}//Queue::stored()
