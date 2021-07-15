#include <iostream>
using namespace std;
int power(int m, int n)
{
    if (n == 0)
        return 1;

    else
        return power(m, n - 1) * m;
}
int main()
{
    int base, exp;
    cin >> base >> exp;
    cout << power(base, exp);
    return 0;
}
