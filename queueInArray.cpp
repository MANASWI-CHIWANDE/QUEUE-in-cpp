#include <iostream>
using namespace std;
#define n 5

class Queue
{
private:
    int arr[n];
    int front;
    int rear;

public:
    Queue();

    void display();

    void enqueue(int);

    void dequeue();

    int peek();

    bool isEmpty();

    bool isFull();
};

Queue::Queue()
{
    front = -1;
    rear = -1;
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
}

void Queue::display()
{
    if (front == -1 || rear < front)
    {
        cout << "\nQUEUE is EMPTY\n"
             << endl;
        return;
    }
    else
    {
        cout << "ELEMENTS OF QUEUE ARE : " << endl;
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

void Queue::enqueue(int val)
{
    if (isFull())
    {
        return;
    }
    else
    {
        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }
}

void Queue::dequeue()
{
    if (isEmpty())
    {
        return;
    }
    else
    {
        front++;
    }
}

int Queue::peek()
{
    if (front == -1 || rear < front)
    {
        cout << "\nQUEUE is EMPTY\n"
             << endl;
        return 1;
    }
    return arr[front];
}

bool Queue::isEmpty()
{

    if (front == -1 || rear < front)
    {
        cout << "\nQUEUE is EMPTY\n"
             << endl;
        return true;
    }
    else
    {
        cout << "\nQUEUE is NOT EMPTY\n"
             << endl;
        return false;
    }
}

bool Queue::isFull()
{
    if (rear == n - 1)
    {
        cout << "\nQUEUE is FULL\n"
             << endl;
        return true;
    }
    else
    {
        cout << "\nQUEUE is NOT FULL\n"
             << endl;
        return false;
    }
}

int main()
{
    Queue q = Queue();
    q.isEmpty();
    q.enqueue(23);
    q.enqueue(34);
    q.enqueue(54);
    q.enqueue(56);
    q.enqueue(78);
    q.display();
    q.isFull();
    q.enqueue(66);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();

    return 0;
}