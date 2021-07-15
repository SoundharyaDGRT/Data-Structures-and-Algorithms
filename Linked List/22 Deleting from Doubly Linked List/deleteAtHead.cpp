/* Delete a head Node in a Doubly Linked List */

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

void deleteAtHead(struct Node *p)
{
    int x;
    first = first->next;
    x = p->data;
    delete p;
    if (first)
    {
        first->prev = NULL;
    }
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

    deleteAtHead(first);

    display(first);

    return 0;
}

/*
OUTPUT:
56 78 90 32
*/
