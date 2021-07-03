/* INSERTING AN ELEMENT IN LINKED LIST */

#include <iostream>
#include <math.h>
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

void insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;

    if (index < 0 || index > count(p))
        return;
    t = new Node;
    t->data = x;
    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data;
        p = p->next;
    }
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};

    create(A, 5);

    insert(first, 0, 5);

    display(first);

    return 0;
}
