/* Delete a Head Node in a Circular Linked List */

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

void DeleteAtHead(struct Node *p) //function to delete head node
{
    int x;
    while (p->next != Head)
    {
        p = p->next;
    }
    p->next = Head->next;
    x = Head->data;
    delete Head;
    Head = p->next;
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

    DeleteAtHead(Head);

    display(Head);

    return 0;
}

/*
OUTPUT:
60 40 30 10
*/
