/* INSERTING AN ELEMENT BEFORE HEAD */

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} * Head;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    Head = new Node;
    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void insert(int x) // function to insert an element before head
{
    struct Node *p = Head;
    struct Node *t = new Node;
    t->data = x;
    t->next = Head;
    while (p->next != Head)
    {
        p = p->next;
    }
    p->next = t;
    Head = t;
}

void display(struct Node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != Head);
}

int main()
{
    int A[] = {80, 60, 40, 30, 10};

    create(A, 5);

    insert(10);

    display(Head);

    return 0;
}

/*
OUTPUT:
10 80 60 40 30 10
*/
