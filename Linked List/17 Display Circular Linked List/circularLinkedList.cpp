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

void display(struct Node *p) // display
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != Head);
}

void Rdisplay(struct Node *p) //recursive display
{
    static int flag;
    if (p != Head || flag == 0)
    {
        flag = 1;
        cout << p->data;
        Rdisplay(p->next);
    }
    flag = 0;
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
