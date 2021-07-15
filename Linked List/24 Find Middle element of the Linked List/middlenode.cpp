/* Find the middle element of a linked list */

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

void MiddleElement(struct Node *p)
{
    struct Node *q;
    q = first;
    while (q)
    {
        q = q->next;
        if (q)
        {
            q = q->next;
        }
        if (q)
        {
            p = p->next;
        }
    }
    cout << p->data;
}

int main()
{
    int A[] = {10, 30, 40, 100, 99, 34, 23};

    create(A, 7);

    MiddleElement(first);

    return 0;
}

/*
OUTPUT:
100
*/
