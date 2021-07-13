/* Check the Linked List is forming loop or linear */

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

int isloop(struct Node *f)
{
    struct Node *p, *q;
    p = q = f;
    do
    {
        p = p->next;
        q = q->next;
        q = q->next != NULL ? q->next : NULL;
    } while (p && q);

    if (p == q)
    {
        return true; // LOOP
    }
    else
    {
        return false; //LINEAR
    }
}
int main()
{
    int A[] = {10, 20, 30, 40, 50};

    struct Node *t1, *t2;

    create(A, 5);

    t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2->next = t1;

    cout << isloop(first);

    return 0;
}
