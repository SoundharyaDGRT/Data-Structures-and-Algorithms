/* MAXIMUM ELEMENT IN LINKED LIST */

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

int max(struct Node *p) // function to find max element
{
    int m = INT_MIN;
    while (p != NULL)
    {
        if (m < p->data)
        {
            m = p->data;
        }
        p = p->next;
    }
    return m;
}

int Rmax(struct Node *p) // recursive function to find max element
{
    int x = 0;
    if (p == 0)
        return INT_MIN;
    else
    {
        x = Rmax(p->next);
        if (x > p->data)
            return x;
        else
            return p->data;
    }
}

int main()
{
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};

    create(A, 8);

    cout << "Maximum element in given Linked List: " << max(first);

    return 0;
}

/*
OUTPUT:
Maximum element in given Linked List: 32
*/
