/* Insert a Node at any given position of Doubly Linked List */

#include <iostream>
using namespace std;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first->prev = NULL;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->prev = NULL;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void insert(int pos, int x)
{
    struct Node *t = new Node;
    struct Node *p = first;
    t->data = x;
    for (int i = 0; i < pos - 1; i++)
    {
        p = p->next;
    }
    t->next = p->next;
    t->prev = p;
    if (p->next)
    {
        p->next->prev = t;
    }
    p->next = t;
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    int A[] = {34, 56, 78, 90, 32};

    create(A, 5);

    insert(1, 100);

    display(first);

    return 0;
}

/*
OUTPUT:
34 100 56 78 90 32
*/
