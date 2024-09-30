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
            
                    case 1: { // Push
                        int numValues;
                        cout << "Enter the number of values to add to Stack and Queue: ";
                        cin >> numValues;

                       for (int i = 0; i < numValues; ++i) {
                        int value;
                        cout << "Enter value " << (i + 1) << ": ";
                        cin >> value;
                        myStack.push(value);
        
                        }

                        break;
                    }
                  
                    case 2:{
                        myStack.pop();
                        break;
                    }
                    case 3: {// Queue Operations
               
                        int numValues;
                        cout << "Enter the number of values to add to Stack and Queue: ";         // Enqueue
                        cin >> numValues;

                       for (int i = 0; i < numValues; ++i) {
                        int value;
                        cout << "Enter value " << (i + 1) << ": ";
                        cin >> value;
                        myQueue.enqueue(value);
        
                        }
                        break;
                    }
                    case 4:{ // Dequeue
                        myQueue.dequeue();
                        break;
                    }
                    
            case 5:{ // Exit
                cout << "Exiting program." << endl;
                break;
            }
            default:{
                cout << "Invalid choice." << endl;
            }
        }
    } while (choice != 5);

    return 0;
}
