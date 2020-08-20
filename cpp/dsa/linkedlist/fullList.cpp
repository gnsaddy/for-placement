#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
class ll : public node
{
private:
    node *head, *tail;

public:
    ll()
    {
        head = NULL;
        tail = NULL;
    }
    void createnode(int value)
    {
        cout << "Node creation" << endl;
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            temp = NULL;
            cout << "Inserted value : " << value << endl;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            cout << "Inserted value : " << value << endl;
        }
    }
    void display()
    {
        cout << "Displaying list" << endl;
        node *temp = new node;
        temp = head;
        if (temp == NULL)
        {
            cout << "\nList is Empty";
        }
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
            if (temp == NULL)
            {
                cout << " null" << endl;
            }
        }
        cout << endl;
    }
    void insert_start(int value)
    {
        cout << "Insert start" << endl;
        node *temp = new node;
        temp->data = value;
        temp->next = head;
        head = temp;
        cout << "Inserted value : " << value << endl;
    }
    void insert_position(int pos, int value)
    {
        cout << "Insert at position" << endl;
        node *pre = new node;
        node *cur = new node;
        node *temp = new node;
        cur = head;
        for (int i = 1; i < pos; i++)
        {
            pre = cur;
            cur = cur->next;
        }
        temp->data = value;
        pre->next = temp;
        temp->next = cur;
        cout << "Inserted value : " << value << " at " << pos << endl;
    }
    void delete_first()
    {
        cout << "Delete first" << endl;
        node *temp = new node;
        temp = head;
        head = head->next;
        cout << "Deleted value : " << temp->data << endl;
        delete temp;
    }
    void delete_last()
    {
        cout << "Delete last" << endl;
        node *current = new node;
        node *previous = new node;
        current = head;
        while (current->next != NULL)
        {
            previous = current;
            current = current->next;
        }
        tail = previous;
        previous->next = NULL;
        cout << "Deleted value : " << current->data << endl;
        delete current;
    }
    void delete_position(int pos)
    {
        cout << "Delete at position : " << pos << endl;
        node *current = new node;
        node *previous = new node;
        current = head;
        for (int i = 1; i < pos; i++)
        {
            // cout <<"pb:" << previous->data << endl;
            previous = current;
            // cout << "pa:" << previous->data << endl;
            // cout << "cb:" << current->data << endl;
            current = current->next;
            // cout << "ca:" << current->data << endl;
        }
        previous->next = current->next;
    }

    void reverse()
    {
        // Initialize current, previous and
        // next pointers
        node *current = head;
        node *prev = NULL, *next = NULL;

        while (current != NULL)
        {
            // Store next
            next = current->next;

            // Reverse current node's pointer
            current->next = prev;

            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
    }
};
int main()
{
    ll obj;
    obj.createnode(25);
    obj.createnode(50);
    obj.createnode(90);
    obj.createnode(40);
    obj.display();
    obj.createnode(55);
    obj.display();
    obj.insert_start(50);
    obj.display();
    obj.insert_position(5, 60);
    obj.display();
    obj.delete_first();
    obj.display();
    obj.delete_last();
    obj.display();
    obj.delete_position(4);
    obj.display();
    obj.reverse();
    obj.display();
    return 0;
}