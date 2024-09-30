#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions.h"
#include <iostream>
#include <sstream>
using namespace std;

TEST_CASE("Test if stack is initially empty", "[isEmpty]") {
    Stack myStack;

    // Check if the stack is empty on initialization
    REQUIRE(myStack.isEmpty() == true);
}

TEST_CASE("Push function test", "[push]") {
    Stack myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Ensure the stack is not empty
    REQUIRE(myStack.isEmpty() == false);

    // Check the top data
    REQUIRE(myStack.peek() == 30);  // Top should be 30
}

TEST_CASE("Pop function test", "[pop]") {
    Stack myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Pop the top element
    myStack.pop();
    REQUIRE(myStack.peek() == 20);  // Top should now be 20
    REQUIRE(myStack.size() == 2);   // Size should be 2

    // Pop the next element
    myStack.pop();
    REQUIRE(myStack.peek() == 10);  // Top should now be 10
    REQUIRE(myStack.size() == 1);   // Size should be 1

    // Pop the last element
    myStack.pop();
    REQUIRE(myStack.isEmpty() == true);  // Stack should now be empty
}

TEST_CASE("Peek function test", "[peek]") {
    Stack myStack;

    // Push elements onto the stack
    myStack.push(10);

    // Peek at the top element
    REQUIRE(myStack.peek() == 10);

    // Push another element
    myStack.push(20);
    REQUIRE(myStack.peek() == 20);  // Top should now be 20

    // Pop the top element
    myStack.pop();
    REQUIRE(myStack.peek() == 10);  // Top should now be 10
}

TEST_CASE("Size function test", "[size]") {
    Stack myStack;

    // Initially size should be 0
    REQUIRE(myStack.size() == 0);

    // Push elements onto the stack
    myStack.push(10);
    REQUIRE(myStack.size() == 1);

    myStack.push(20);
    REQUIRE(myStack.size() == 2);

    myStack.push(30);
    REQUIRE(myStack.size() == 3);

    // Pop an element
    myStack.pop();
    REQUIRE(myStack.size() == 2);

    // Clear the stack
    myStack.clear();
    REQUIRE(myStack.size() == 0);
}

TEST_CASE("Clear function test", "[clear]") {
    Stack myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Clear the stack
    myStack.clear();

    // Ensure the stack is empty
    REQUIRE(myStack.isEmpty() == true);
    REQUIRE(myStack.size() == 0);
}

TEST_CASE("Pop from empty stack test", "[pop]") {
    Stack myStack;

    // Attempt to pop from an empty stack
    myStack.pop(); // Should handle underflow gracefully

    // Ensure the stack is still empty
    REQUIRE(myStack.isEmpty() == true);
}

TEST_CASE("Peek from empty stack test", "[peek]") {
    Stack myStack;

    // Attempt to peek at an empty stack
    int topValue = myStack.peek();

    // Since peek returns -1 when the stack is empty
    REQUIRE(topValue == -1);
}


TEST_CASE("Test if Queue is initially empty", "[isEmpty]") {
    Queue myQueue;

    // Check if the stack is empty on initialization
    REQUIRE(myQueue.isEmpty() == true);
}

TEST_CASE("Enqueue function test", "[push]") {
    Queue myQueue;

    // Push elements onto the stack
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    // Ensure the stack is not empty
    REQUIRE(myQueue.isEmpty() == false);

    // Check the top data
    REQUIRE(myQueue.peek() == 10);  // Top should be 10
}

TEST_CASE("Dequeue function test", "[pop]") {
    Queue myQueue;

    // Push elements onto the stack
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    // Pop the top element
    myQueue.dequeue();
    REQUIRE(myQueue.peek() == 20);  // Top should now be 20
    REQUIRE(myQueue.size() == 2);   // Size should be 2

    // Pop the next element
    myQueue.dequeue();
    REQUIRE(myQueue.peek() == 30);  // Top should now be 10
    REQUIRE(myQueue.size() == 1);   // Size should be 1

    // Pop the last element
    myQueue.dequeue();
    REQUIRE(myQueue.isEmpty() == true);  // Stack should now be empty
}

TEST_CASE("Queue Peek function test", "[peek]") {
    Queue myQueue;

    // Push elements onto the stack
    myQueue.enqueue(10);

    // Peek at the top element
    REQUIRE(myQueue.peek() == 10);

    // Push another element
    myQueue.enqueue(20);
    REQUIRE(myQueue.peek() == 10);  // Top should now be 20

    // Pop the top element
    myQueue.dequeue();
    REQUIRE(myQueue.peek() == 20);  // Top should now be 10
}

TEST_CASE("Queue Size function test", "[size]") {
    Queue myQueue;

    // Initially size should be 0
    REQUIRE(myQueue.size() == 0);

    // Push elements onto the stack
    myQueue.enqueue(10);
    REQUIRE(myQueue.size() == 1);

    myQueue.enqueue(20);
    REQUIRE(myQueue.size() == 2);

    myQueue.enqueue(30);
    REQUIRE(myQueue.size() == 3);

    // Pop an element
    myQueue.dequeue();
    REQUIRE(myQueue.size() == 2);

    // Clear the stack
    myQueue.dequeue();
    myQueue.dequeue();
    REQUIRE(myQueue.size() == 0);
}


TEST_CASE("dequeue from empty Queue test", "[pop]") {
    Queue myQueue;

    // Attempt to pop from an empty stack
    myQueue.dequeue(); // Should handle underflow gracefully

    // Ensure the stack is still empty
    REQUIRE(myQueue.isEmpty() == true);
}

TEST_CASE("Peek from empty Queue test", "[peek]") {
    Queue myQueue;

    // Attempt to peek at an empty stack
    int topValue = myQueue.peek();

    // Since peek returns -1 when the stack is empty
    REQUIRE(topValue == -1);
}


