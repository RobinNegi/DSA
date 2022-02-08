#include <bits/stdc++.h>
using namespace std;
int ans;
// fnc to count
int favnum(int n)
{
    if (n == 0)
        return 0;
    ans = favnum(n / 10);
    if (n % 10 == 2 || n == 2)
        ans++;
    return ans;
}

int main()
{
    int n, count = 0;
    cin >> n;
    count = favnum(n);
    cout << " 2 occured: " << count << endl;
    return 0;
}