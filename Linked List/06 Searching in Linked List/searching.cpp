/* SEARCHING AN ELEMENT IN LINKEDLIST */

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

struct Node *Lsearch(struct Node *p, int key)
{
    struct Node *q;
    while (p != NULL)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
}

struct Node *Rsearch(struct Node *p, int key)
{
    if (p == 0)
        return NULL;
    if (key == p->data)
    {
        return p;
    }
    else
    {
        return Rsearch(p->next, key);
    }
}
int main()
{
    int A[] = {2, 5, 6, 8, 66, 72, 12};

    create(A, 7);

    cout << "The key element found at: " << Lsearch(first, 8);

    return 0;
}

/*
OUTPUT:
The key element found at: 0x1d19e0
*/
