//
// Created by Neil on 5/18/2017.
//

#include <iostream>
#include "Queue.hpp"
Queue::Queue() {
	front 	= nullptr;
	back 	= nullptr;
}

Queue::~Queue() {
	QueueNode *nodePtr = front;
	while (nodePtr != back) {
// Mark node for preparation to delete
		QueueNode *garbage = nodePtr;

// Move pointer to next item
		nodePtr = nodePtr->next;

// Delete old node
		delete garbage;
	}
	delete back;
}

void Queue::addBack(int val) {
	if (front == nullptr) {
		front = new QueueNode(val, back, back);
	}
	else if (back == nullptr) {
		back = new QueueNode(val, front, front);
		front->next = back;
		front->prev = back;
	}
	else {
		QueueNode* queuePtr = new QueueNode(val, front, back);
		back->next 	= queuePtr;
		front->prev = queuePtr;
		back = queuePtr;
	}
}

void Queue::getFront() {
	if (front) {
		std::cout << "Front: " << front->value << std::endl;
	}
	else {
		std::cout << "No item to show." << std::endl;
	}
}

void Queue::removeFront() {
	if (front == back){
		front = nullptr;
		back = nullptr;
	}
	else {
		front->next->prev = back;
		back->next = front->next;
		delete front;
		front = back->next;
	}

}

/**************************************************************
 *                  Queue::displayList()
 *	Prints the items out from first item to last item.  If there
 *	is nothing in the list then notify the user
 **************************************************************/
void Queue::displayList() {
	if (front) {
		QueueNode *nodePtr = front;
		while (nodePtr != back) {
			// Print the value in the current node
			std::cout << nodePtr->value << " ";
			// Move to the next node
			nodePtr = nodePtr->next;
		}
		if (back) {
			std::cout << nodePtr->value << " ";
		}
	}
	else {
		std::cout << "Nothing in this list.";
		return;
	}


}