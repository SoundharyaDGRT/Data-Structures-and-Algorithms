#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

} *top = NULL;

void push(int x)
{
    struct Node *t = new Node;
    if (t == NULL)
    {
        cout << "Stack Overflow";
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
int pop()
{
    struct Node *t;
    int x = -1;
    if (top == NULL)
    {
        cout << "Stack is empty";
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        delete t;
    }
    return x;
}
void display()
{
    struct Node *p = new Node;
    p = top;
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}
int main()
{
    push(100);
    push(50);
    push(30);
    push(80);
    pop();
    display();
    return 0;
}
