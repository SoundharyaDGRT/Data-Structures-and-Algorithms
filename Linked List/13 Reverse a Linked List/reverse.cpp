/* REVERSE A LINKED LIST */

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
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

void reverse(struct Node *p)
{
    struct Node *q = NULL, *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

void Rreverse(struct Node *p, struct Node *q)
{
    if (p != NULL)
    {
        Rreverse(p, p->next);
        p->next = q;
    }
    else
    {
        first = q;
    }
}

int main()
{
    int A[] = {10, 20, 30, 40, 50, 60};

    create(A, 6);

    reverse(first);

    display(first);

    return 0;
}

/*
OUTPUT:
60 50 40 30 20 10
*/
