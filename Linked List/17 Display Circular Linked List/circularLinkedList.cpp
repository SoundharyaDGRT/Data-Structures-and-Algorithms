/* Display Circular Linked List and find the length of the linked list */

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} * Head;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    Head = new Node;
    Head->data = A[0];
    Head->next = NULL;
    last = Head;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int Length(struct Node *p)
{
    int len = 0;

    do
    {
        len++;
        p = p->next;
    } while (p != Head);

    return len;
}

void display(struct Node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != Head);
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};

    create(A, 5);

    display(Head);

    return 0;
}

/*
OUTPUT:
10 20 30 40 50
*/
