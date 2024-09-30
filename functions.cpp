#include <iostream>
#include "functions.h"
using namespace std;

Node:: Node(int dat){
    this->data = dat;
    next = nullptr;
}
Node::Node(){
    data=0;
    next= nullptr;
}
List:: List(Node*head, Node*tail, int frequency){
   head = nullptr;
   tail = nullptr;
   this-> count = frequency;
}
List:: List(){
   head = nullptr;
   tail = nullptr;
   count = 0;
}
List:: ~ List(){

    cout <<"destructor of list" << endl;
  if(head== nullptr){
        return;
    }
    else {
        Node *now; 
        now = head;

        int index =0;
        Node *nextNode;

        while (now != nullptr) {
            if(index==count){
              break;
            }
            cout << "While loop started"<< endl;
            nextNode =now->getNext();
            cout << now->getData() << endl;

            delete now;
            index++;
            now = nextNode;
        }
  
}
}


Node* List::getHead() {
    return head;
}

Node* List::getTail() {
    return tail;
}
void List::setHead(Node* node1) {
    head = node1;
}

void List::setTail(Node* node2) {
    tail = node2;
}

void Node::setNext(Node* val){
  this->  next = val;
}
Node* Node:: getNext(){
    return next;
}
void Node::setData(int data){ 
   this-> data = data;
}
int Node::getData(){
  return data;
}
Stack:: Stack(){
    count = 0;
  
}
Stack :: Stack(int val){
    count = val;
  
}


Stack:: ~ Stack(){

}
bool Stack:: isEmpty(){
    if(count == 0){
        return true;
    }
    
    return false;
}
void Stack::push(int data){
   
    Node* node = new Node(data);
    
   if (!myList.getHead()) {  // If the list is empty
        myList.setHead(node);
        myList.setTail(node);
        node->setNext(nullptr);
    } 
   if (myList.getHead())
    {  
        node->setNext(myList.getHead());  // Linking the new node to the current head
        myList.setHead(node); 
    }
    count++;
  
     printStack();
}
int Stack::peek() {
    if (!myList.getHead()) {
       cout <<"Stack is empty";
       return -1;
    }
    return myList.getHead()->getData();
}


void Stack:: pop(){
   if(isEmpty()){
    cout<<"Array is empty:" << endl;
    return;
   }
   if(myList.getHead()==nullptr){
    return;
   }
   if (myList.getHead() == myList.getTail()) {
       delete myList.getHead(); 
       myList.setHead(nullptr);  
       myList.setTail(nullptr);  
   } else {
  
       Node* temp = myList.getHead(); 
       myList.setHead(myList.getHead()->getNext());  
       delete temp; 
       temp = nullptr;
   }

   count--;
    printStack();
}
int Stack::size(){
    return count;

}
void Stack::clear(){
    if(count==0){
       cout<<"stack is empty:" << endl;
    }
   while (count !=0)
   {
    --count;
   }
   
  }

Queue:: Queue(int size ){
    count= size;
   
}
Queue:: Queue(){
    count = 0;
}
Queue:: ~Queue(){

}
 bool Queue:: isEmpty(){
    if(count ==0){
        return true;
    }
    else{
        return false;
    }
 }
void  Queue::enqueue(int data){
 Node* node = new Node(data); // Create a new node

    if (isEmpty()) {
       
        myList.setHead(node);
        myList.setTail(node);                    // If the queue is empty, both head and tail are pointing to the new node
    } else {
    
        myList.getTail()->setNext(node);  
        node->setNext(nullptr);         // If the queue is not empty, i will add the new node  to the end and update tail
        myList.setTail(node);
    }

    count ++;
    printQueue();
   }

int Queue:: size(){
        return count;
    }


void  Queue::dequeue(){
    
    if (myList.getHead() == nullptr) {
        cout << "Queue is empty" << endl;
        return;
    }

    Node* temp = myList.getHead();
    if (myList.getHead() == myList.getTail()) {
        
        myList.setHead(nullptr);       // If there's only one element
        myList.setTail(nullptr);
    } else {
   
        myList.setHead(myList.getHead()->getNext());             // Move the head to the next node
    }

    delete temp; 
    temp = nullptr;
    count--;
    printQueue();
}



int Queue::peek() {
    if (!myList.getHead()) {
       cout <<"Queue is empty";
       return -1;
    }
    return myList.getHead()->getData();
}
void Stack::printStack() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return;
    }

    Node* current = myList.getHead();
    int index = 0;
    while (current != nullptr) {
        
        if (index == count) {
            break;
        }
        cout << current->getData() << " ";
        current = current->getNext();
        index++;  
    }
    cout << endl;
}
void Queue::printQueue() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        return;
    }
    int index = 0;
    Node* current = myList.getHead();
    while (current != nullptr) {
        if(index == count){
            break;
        }
        cout << current->getData() << " ";
        current = current->getNext();
        index ++;
    }
    cout << endl;
}
