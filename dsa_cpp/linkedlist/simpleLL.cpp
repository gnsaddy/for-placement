#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL;
    Node *one = new Node();
    Node *two = new Node();

    one->data = 10;
    two->data = 20;

    one->next = two;
    two->next = NULL;

    head = one;

    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
        if (head == NULL)
        {
            cout << "null" << endl;
        }
    }
}