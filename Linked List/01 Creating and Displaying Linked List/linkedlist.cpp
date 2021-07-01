/* CREATING AND DISPLAYING LINKED LIST */

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

// function to create linked list
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

// function to display linked list
void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    int A[] = {2, 4, 6, 8, 10}, n = 5;

    create(A, n);

    display(first);

    return 0;
}

/*
OUTPUT
2 4 6 8 10
*/
