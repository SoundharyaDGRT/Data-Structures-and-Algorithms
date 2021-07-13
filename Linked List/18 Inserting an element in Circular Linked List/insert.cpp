/* INSERTING AN ELEMENT AT A GIVEN POSITION */

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

void insert(int pos, int x) // function to insert at a given position
{
    struct Node *t, *p = Head;
    for (int i = 0; i < pos - 1; i++)
    {
        p = p->next;
    }
    t = new Node;
    t->data = x;
    t->next = p->next;
    p->next = t;
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
    int A[] = {2, 4, 6, 8, 7};

    create(A, 5);

    insert(1, 3);

    display(Head);

    return 0;
}

/*
OUTPUT:
2 3 4 6 8 7
*/
