/* Delete a Node at any given position in a Circular Linked List */

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
    Head->next = Head;
    last = Head;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void DeleteAtPos(struct Node *p, int pos) //function to delete a node at any given position
{
    int x;
    struct Node *q;
    for (int i = 0; i < pos - 2; i++)
    {
        p = p->next;
    }
    q = p->next;
    p->next = q->next;
    x = q->data;
    delete q;
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
    int A[] = {80, 60, 40, 30, 10};

    create(A, 5);

    DeleteAtPos(Head, 3);

    display(Head);

    return 0;
}

/*
OUTPUT:
80 60 30 10
*/
