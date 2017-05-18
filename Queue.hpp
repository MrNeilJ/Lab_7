//
// Created by Neil on 5/18/2017.
//

#ifndef LAB_7_QUEUE_HPP
#define LAB_7_QUEUE_HPP


class Queue {
private:
	struct QueueNode {
		int value;
		QueueNode* next;
		QueueNode* prev;

		// Constructor for the QueueNode Struct
		QueueNode(int value1, QueueNode* next1 = nullptr, QueueNode* prev1 = nullptr) {
			value = value1;
			next = next1;
			prev = prev1;
		}
	};

	QueueNode* front;
	QueueNode* back;

public:
	Queue();
	~Queue();
	void addBack(int val);	// Puts on item at the end of the queue
	void getFront();		// returns the value at the front of the queue
	void removeFront();		// removes the front item in the structure
	void displayList();
};


#endif //LAB_7_QUEUE_HPP
