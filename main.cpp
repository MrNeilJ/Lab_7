/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 4.14.2017
 *
 * Description: This is the main file for the linked list program.
 * In here we create an easy to interact with menu that allows the
 * user to build a linked list and even remove items from the head
 * and the tail of the list.
 **************************************************************/

#include <iostream>
#include "menuMaker.hpp"
#include "Queue.hpp"
#include "inputCheck.hpp"

int main() {
	std::cout << "*****************************************" << std::endl;
	std::cout << "*      CIRCULAR LINKER PROGRAM          *" << std::endl;
	std::cout << "*****************************************" << std::endl;
	std::cout << "Welcome to the Circular linker program! In here you will" << std::endl;
	std::cout << "be able to create your very own linked list from"		<< std::endl;
	std::cout << "scratch.\n"											<< std::endl;

	menuMaker mainMenu(	"What would you like to do to your list?",
						   "Enter a value to be added to the queue.",
						   "Display first node(front) value.",
						   "Remove first node(front) value.",
						   "Display the queue contents",
						   "Quit");

	int mainChoice = -1;

	/**************************************
	 * LINKED LIST CREATOR
	 **************************************/
	Queue myList;
	int number;


	do {
		mainMenu.prompt();
		mainChoice = mainMenu.getResponse();

		if (mainChoice == 1) {
			// Add a new node to the head
			std::cout << "Type in the number you'd like to add to the list: ";
			number = getInt();
			myList.addBack(number);

			// Show the updated list
			std::cout << "\n\nHere is an updated copy of your list:" << std::endl;
			myList.displayList();
			std::cout << "\n" << std::endl;
		}
		else if (mainChoice == 2) {
			// Delete from the tail(the last node in the list
			myList.getFront();

		}
		else if (mainChoice == 3) {
			// Delete from the head(the first node in the list.
			myList.removeFront();

			// Show the updated list
			std::cout << "\n\nHere is an updated copy of your list:" << std::endl;
			myList.displayList();
			std::cout << "\n" << std::endl;

		}
		else if (mainChoice == 4) {
			// Show the updated list
			std::cout << "\n\nHere is an updated copy of your list:" << std::endl;
			myList.displayList();
			std::cout << "\n" << std::endl;
		}
		else if (mainChoice == 5) {
			std::cout << "Thanks for using the Circular link linker, have a great day!";

		}
		else {
			std::cout << "I'm sorry, I do not understand that response, try again.\n" << std::endl;
		}
	} while(mainChoice != 5);


	return 0;
}

