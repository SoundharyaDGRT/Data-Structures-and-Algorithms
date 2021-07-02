/* Count the number of nodes and Sum of all the elements in a Linked List */

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

int count(struct Node *p) // count function
{
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}

int Rcount(struct Node *p) // recursive count function
{
    if (p == 0)
        return 0;
    else
        return Rcount(p->next) + 1;
}

int sum(struct Node *p) // sum function
{
    int s = 0;
    while (p != NULL)
    {
        s = s + p->data;
        p = p->next;
    }
    return s;
}

int Rsum(struct Node *p) // recursive sum function
{
    if (p == 0)
        return 0;
    else
        return sum(p->next) + p->data;
}

int main()
{
    int A[] = {8, 3, 7, 12, 9};

    create(A, 5);

    cout << "Count: " << count(first);

    cout << "Sum: " << sum(first);

    return 0;
}

/*
OUTPUT:
Count: 5 Sum: 39
*/
