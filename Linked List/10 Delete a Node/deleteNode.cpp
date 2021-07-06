/* Delete a Node at first or to delete at any given position */

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

void deleteNode(struct Node *p, int pos)
{
    struct Node *q;
    int x = -1, i;
    if (pos == 0)
    {
        x = first->data;
        p = first;
        first = first->next;
        delete p;
    }
    else
    {
        p = first;
        q = NULL;
        for (i = 0; i < pos - 1 && p; i++)
        {
            q = p;
            p = p->next;
        }
        if (p)
        {
            q->next = p->next;
            x = p->data;
            delete p;
        }
    }
}

int main()
{
    int A[] = {2, 3, 4, 5, 6};
    create(A, 5);
    deleteNode(first, 2);
    display(first);
    return 0;
}

/* 
OUTPUT:
2 4 5 6
*/
