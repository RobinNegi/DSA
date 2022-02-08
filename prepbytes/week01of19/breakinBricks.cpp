#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, s, w[3], temp = 0;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        cin >> s;
        for (int i = 0; i < 3; i++)
        {
            cin >> w[i];
            sum += w[i];
        }
        if (s <= sum)
        {
            temp = sum / s;
            if (sum % s == 0)
                temp++;
        }
        else
            temp = 1;
        cout << temp << endl;
    }
    return 0;
}