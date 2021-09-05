#include<iostream>
using namespace std;
#include"./circularqueueLinkedList.cpp"

int main()
{
    CircularQueue q = CircularQueue();
    q.enqueue(1);
    q.display();
    q.enqueue(2);
    q.display();
    q.dequeue();
    q.display();
    // q.sizeofQueue();
    return 0;
}