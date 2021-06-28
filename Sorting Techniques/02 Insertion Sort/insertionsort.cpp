/*  INSERTION SORT */

#include <iostream>
using namespace std;

void InsertionSort(int A[], int n)
{
    int i, j, x;
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        x = A[i];
        while (j > -1 && A[j] > x)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = x;
    }
}
int main()
{
    int n = 10, A[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3};

    InsertionSort(A, n);

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}

/*
Output:
3 5 7 9 10 11 12 13 16 24
*/
