/* Check of a Linked List is Sorted */

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

int isSorted(struct Node *p)
{
    int x = INT_MIN;
    while (p != NULL)
    {
        if (p->data < x)
        {
            return 0; //Linked List is not Sorted
        }
        else
        {
            x = p->data;
            p = p->next;
        }
    }
    return 1; //Linked List is Sorted
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    create(A, 5);
    cout << isSorted(first);
    return 0;
}

/*
OUTPUT:
1
*/
