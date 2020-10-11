#include <bits/stdc++.h>
using namespace std;

int top = -1;

void push(int ar[], int s)
{
    // cout << "top value: " << top << endl;
    top = top;

    if (top > s)
    {
        cout << "Stack overflow" << endl;
    }
    else
    {
        int item;
        cin >> item;
        ar[++top] = item;
        cout << item << " : Inserted" << endl;
    }
}

void pop(int ar[], int s)
{
    if (top < 0)
        cout << "Stack underflow" << endl;

    else
    {

        cout << ar[top--] << " : Deleted" << endl;
    }
}

void display(int ar[], int s)
{
    if (top < 0)
    {
        cout << "Stack underflow" << endl;
    }

    for (int i = top; i >= 0; i--)
    {
        cout << ar[i];
    }
    cout << endl;
}

int main()
{

    int n;
    cin >> n;
    int ar[n];

    while (1)
    {

        cout << "1: PUSH 2:POP 3:DISPLAY" << endl;
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
            push(ar, n);
            break;
        case 2:
            pop(ar, n);
            break;

        case 3:
            display(ar, n);
            break;
        }
    }
}