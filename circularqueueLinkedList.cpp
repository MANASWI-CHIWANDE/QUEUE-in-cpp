#include<iostream>
#include"./node.cpp"
using namespace std;

class CircularQueue{
    private :
    Node* front ;
    Node* rear ;
    int length ;

    public:

    CircularQueue();
    
    Node* getFront();

    Node*getRear();

    void display();

    int enqueue(int);

    int dequeue();

    bool isEmpty();
    
    int sizeofQueue();

};

CircularQueue::CircularQueue(){
    front = NULL;
    rear =NULL ;
    length =0 ;
}

Node* CircularQueue::getFront(){
    return front;
}

Node* CircularQueue::getRear(){
    return rear ;
}

void CircularQueue::display(){
    cout << "\nPrinting Circular Queue" << endl;
        Node *current = front;
        while (current->getNextPtr() != front)
        {
            cout << "( " << current->getData() << " , " << current->getNextPtr() << " ) => ";
            current = current->getNextPtr();
        }
        cout << "( " << current->getData() << " , " << current->getNextPtr() << " ) = x " << endl;

        cout << "Finished Printing \n"
             << endl;
}

int CircularQueue::enqueue(int val){
    if (front == NULL)
    {
        front = new Node(val);
        front->setNextPtr(front);
        rear = front;

        length++;
        return 1;
    }
    else
    {
        Node *newNode = new Node(val);
        rear->setNextPtr(newNode);
        newNode->setNextPtr(front);
        length++;
        return 1;
    }
}

int CircularQueue::dequeue(){
    if (front->getNextPtr() == front)
        {
            front->setNextPtr(NULL);
            front = NULL;
            rear = NULL;

            length--;
            return 1;
        }
        else
        {
            rear->setNextPtr(front->getNextPtr());
            front = front->getNextPtr();

            length--;
            return 1;
        }
}