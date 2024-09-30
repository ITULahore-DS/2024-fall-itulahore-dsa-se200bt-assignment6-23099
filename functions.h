#ifndef FUNCTIONS_H
#define FUNCTIONS_H


class Node{
    int data;
    Node* next;
    public:
    Node(int dat);
    Node();
    // ~Node();
    void setNext(Node* val);
    Node* getNext();
    void setData(int data);
    int getData();    
};

class List{
    Node* head;
    Node* tail;
    int count;   //number of elements

    public:
    List(Node*head, Node*tail, int frequency);
    List();
    ~List();
	Node* getHead();
	Node* getTail(); 

    void setHead(Node* node1);
    void setTail(Node* node2);
    void printList();
 
};

class Stack{
    	
        int count;
        List myList; 
        public:
        
        Stack(int val);
        Stack();
        ~Stack();
        bool isEmpty();
        void push(int data);
        void pop();
        int peek();
        int size();
        void clear(); 
        void printStack(); 
        
      
  
};
class Queue{
    List myList;
	int count;

    public:
    Queue(int size );
    Queue();
    ~Queue();
    bool isEmpty();
    void enqueue(int data);
    void dequeue();
    int size();
    int peek();
    int getFront();
    int getBack();
    void printQueue();


};


#endif



