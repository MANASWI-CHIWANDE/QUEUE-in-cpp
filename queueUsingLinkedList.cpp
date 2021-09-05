#include<iostream>
using namespace std;
#include"./node.cpp"


class Queue{
    private :
    Node* front ;
    Node* rear;
    int length=0;

    public:

    Queue();

    Node* getFront();

    Node*getRear();

    void display();

    int enqueue(int);

    int dequeue();

    bool isEmpty();
    
    int sizeofQueue();

};

Queue::Queue(){
    front = NULL;
    rear = NULL;
}

Node* Queue::getFront(){
    return front;
}

Node* Queue::getRear(){
    return rear;
}

void Queue::display(){
    cout<<"\nPrinting Queue"<<endl;
    Node *current = front;
    while(current->getNextPtr()!= NULL){
        cout<<"( "<< current->getData()<<" , " << current->getNextPtr() << " ) => ";
        current = current->getNextPtr();
    }
    cout<<"( "<< current->getData()<<" , " << current->getNextPtr() << " )  = x "<<endl;

    cout<<"Finished Printing \n"<<endl;

}

int Queue::enqueue(int val){
    if(front == NULL && rear == NULL){
        
        front = new Node(val);
        rear = front ;
        length++;
        return 1;

    }
    else{

        Node* newNode = new Node(val);
        rear->setNextPtr(newNode);
        length++;
        return 1;
    }

    return 0;
}

int Queue::dequeue(){
    if(front == NULL && rear == NULL){
        cout<<"QUEUE is EMPTY"<<endl;
    }
    else{
        front = front->getNextPtr();
        length--;
        return 1;
    }
}

bool Queue::isEmpty(){
    if(front == NULL && rear == NULL){
        cout<<"Queue is Empty"<<endl;
        return true;
    }
    else{
        cout<<"Queue is not Empty"<<endl;
        return false;
    }
}

int Queue::sizeofQueue(){
    cout<<"\nLength of the QUEUE is : "<<length<<"\n"<<endl;
    return 0;
}