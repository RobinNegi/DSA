#include <bits/stdc++.h>
using namespace std;

void print(int *a)
{
    cout << a << endl;
}
// to pass 2d array to funct also define the formal arg as a array of the same type or the pointer
// for a[2][3][4] func. will be void print(int (*p)[3][4])
// then we can pass print(a) easily
int main()
{

    int x[3][4] = {{0, 1, 2, 3},
                   {4, 5, 6, 7},
                   {8, 9, 10, 11}};
    int(*p)[4] = x;
    cout << x << endl;
    print(*x);
    print(x[0]);

    print(&x[0][0]);

    return 0;
}