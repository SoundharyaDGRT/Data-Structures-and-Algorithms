#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    struct Node *t = new Node;
    if (t == NULL)
    {
        cout << "Queue is full";
    }
    else
    {
        t->data = x;
        t->next = NULL;
        if (front == NULL)
        {
            front = rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x = -1;
    struct Node *p;
    if (front == NULL)
    {
        cout << "Queue is empty";
    }
    else
    {
        p = front;
        front = front->next;
        x = p->data;
        delete p;
    }
    return x;
}

void display()
{
    struct Node *p = front;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
int main()
{
    enqueue(90);
    enqueue(80);
    enqueue(70);
    enqueue(60);
    enqueue(50);
    dequeue();
    display();
    return 0;
}

/*
OUTPUT:
80 70 60 50
*/
