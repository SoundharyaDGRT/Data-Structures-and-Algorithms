/* STACK USING ARRAY */

#include <iostream>
using namespace std;
struct Stack
{
    int size;
    int Top;
    int *s;
};
void create(struct Stack *st)
{
    cout << "Enter the size of an array: ";
    cin >> st->size;
    st->s = new int[st->size];
    st->Top = -1;
}

int push(struct Stack *st, int x)
{

    if (st->Top == st->size - 1)
        cout << "Stack Overflow";
    else
    {
        st->Top++;
        st->s[st->Top] = x;
    }
}

void pop(struct Stack *st)
{
    int x = -1;
    if (st->Top == -1)
    {
        cout << "Stack Underflow";
    }
    else
    {
        x = st->s[st->Top];
        st->Top--;
    }
    return x;
}

void display(struct Stack *st)
{
    int i;
    for (i = st->Top; i >= 0; i--)
    {
        cout << st->s[i] << " ";
    }
}

int main()
{
    struct Stack st;
    create(&st);

    push(&st, 30);
    push(&st, 60);
    push(&st, 90);
    push(&st, 10);
    push(&st, 20);
    pop(&st);

    display(&st);
}
