/* Create and Display Linked list Recursively */

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

void DisplayRecursive(struct Node *p)
{
    if (p != NULL)
    {
        cout << p->data << " ";
        DisplayRecursive(p->next);
    }
}

int main()
{
    int A[] = {11, 22, 33, 44, 55};

    create(A, 5);

    DisplayRecursive(first);

    return 0;
}

/*
OUTPUT:
11 22 33 44 55
*/
