#include <bits/stdc++.h>
using namespace std;

#define MAX 10

class Stack
{
    int top;

public:
    int arr[MAX];

    Stack()
    {
        top = -1;
    }

    void push(int item);
    int pop();
    void isEmpty();
    void display();
};

void Stack::push(int item)
{
    if (top >= MAX)
    {
        cout << "Stack is full 'OVERFLOW' " << endl;
    }
    else
    {
        arr[++top] = item;
        cout << "Inserted item is : " << arr[top] << endl;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack is empty 'UNDERFLOW' " << endl;
        return 0;
    }
    else
    {
        int d = arr[top--];
        cout << "Deleted item is : " << d << endl;
        return d;
    }
}

void Stack::isEmpty()
{
    if (top < 0)
    {
        cout << "Stack is empty 'UNDERFLOW' " << endl;
    }
    else
    {
        cout << "Stack is not empty " << endl;
    }
}

void Stack::display()
{
    if (top < 0)
    {
        cout << "Stack is empty 'UNDERFLOW' " << endl;
    }
    else
    {
        cout << "Stack items : " << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
        cout << "Peek: " << arr[top] << endl;
    }
}

int main()
{
    Stack obj;
    obj.push(20);
    obj.push(30);
    obj.push(10);
    obj.display();
    obj.pop();
    obj.display();
    obj.isEmpty();
}