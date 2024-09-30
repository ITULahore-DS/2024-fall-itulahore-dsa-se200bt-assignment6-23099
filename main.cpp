#include <iostream>
#include "functions.h"
using namespace std;

void displayMenu() {
    cout << "1. Stack Operations" << endl;
    cout << "   1. Push" << endl;
    cout << "   2. Pop" << endl;
    cout << "2. Queue Operations" << endl;
    cout << "   1. Enqueue" << endl;
    cout << "   2. Dequeue" << endl;
    cout << "3. Exit" << endl;
}

int main() {
    Stack myStack;
    Queue myQueue;

    int choice;
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int stackChoice;
                cout << "1. Push" << endl;
                cout << "2. Pop" << endl;
                cout << "Enter your Stack choice: ";
                cin >> stackChoice;

                if (stackChoice == 1) {
                    int numValues;
                    cout << "Enter the number of values to add to the Stack: ";
                    cin >> numValues;

                    for (int i = 0; i < numValues; ++i) {
                        int value;
                        cout << "Enter value " << (i + 1) << ": ";
                        cin >> value;
                        myStack.push(value);
                    }
                } else if (stackChoice == 2) {
                    myStack.pop();
                } else {
                    cout << "Invalid Stack operation." << endl;
                }
                break;
            }
            case 2: {
                int queueChoice;
                cout << "1. Enqueue" << endl;
                cout << "2. Dequeue" << endl;
                cout << "Enter your Queue choice: ";
                cin >> queueChoice;

                if (queueChoice == 1) {
                    int numValues;
                    cout << "Enter the number of values to add to the Queue: ";
                    cin >> numValues;

                    for (int i = 0; i < numValues; ++i) {
                        int value;
                        cout << "Enter value " << (i + 1) << ": ";
                        cin >> value;
                        myQueue.enqueue(value);
                    }
                } else if (queueChoice == 2) {
                    myQueue.dequeue();
                } else {
                    cout << "Invalid Queue operation." << endl;
                }
                break;
            }
            case 3: {
                cout << "Exiting program." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    } while (choice != 3);

    return 0;
}
