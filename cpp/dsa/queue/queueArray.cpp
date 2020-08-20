#include <bits/stdc++.h>
using namespace std;
#define MAX 5

class Queue
{
public:
    int ar[MAX];
    int front;
    int rear;

    Queue()
    {
        front = rear = -1;
    }

    void enqueue(int item);
    int dequeue();
    void printQueue();
};

void Queue::enqueue(int item)
{
    if (rear == MAX - 1)
    {
        cout << "Queue is full " << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        ar[++rear] = item;
        cout << "Inserted item is : " << item << endl;
    }
}

int Queue::dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty " << endl;
        return -1;
    }
    else
    {
        int d = ar[front];
        front++;
        cout << "Deleted item : " << d << endl;
        return d;
    }
}

void Queue ::printQueue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty " << endl;
    }
    else
        for (int i = front; i <= rear; i++)
        {
            cout << ar[i] << endl;
        }
}

int main()
{
    Queue obj;

    obj.enqueue(10);
    obj.enqueue(20);
    obj.enqueue(30);
    obj.enqueue(40);
    obj.enqueue(50);
    obj.enqueue(40);
    obj.enqueue(50);
    obj.printQueue();
    obj.dequeue();
    obj.dequeue();
    obj.dequeue();
    obj.dequeue();
    obj.dequeue();
    obj.dequeue();
    obj.dequeue();
    obj.printQueue();
    obj.enqueue(50);
    obj.enqueue(50);
    obj.printQueue();
    obj.dequeue();
    obj.printQueue();
    // obj.enqueue(120);
    // obj.enqueue(130);
    // obj.enqueue(140);
    // obj.enqueue(150);
    // obj.printQueue();
    // obj.enqueue(130);
    // obj.enqueue(140);
    // obj.enqueue(150);
    // obj.printQueue();
}