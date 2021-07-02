/* MINIMUM ELEMENT IN LINKED LIST */

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

    for (i = 0; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int min(struct Node *p) // function to find min element
{
    int m = INT_MAX;
    while (p != NULL)
    {
        if (m > p->data)
        {
            m = p->data;
        }
        p = p->next;
    }
    return m;
}

int Rmin(struct Node *p) // recursive function to find min element
{
    int x = 0;
    if (p == 0)
        return INT_MAX;
    else
    {
        x = Rmin(p->next);
        if (x < p->data)
            return x;
        else
            return p->data;
    }
}

int main()
{
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};

    create(A, 8);

    cout << "Minimum element in given Linked List: " << min(first);

    return 0;
}

/*
OUTPUT:
Minimum element in given Linked List: 2
*/
