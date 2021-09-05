#include<iostream>
using namespace std;
#include"./queueUsingLinkedList.cpp"

int main()
{
    Queue q = Queue();
    q.enqueue(1);
    q.display();
    q.enqueue(2);
    q.display();
    q.dequeue();
    q.display();
    q.sizeofQueue();
    return 0;
}
