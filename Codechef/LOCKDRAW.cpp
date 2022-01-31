// Codechef
// Problem Code: LOCKDRAW

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int pts[3];
        int i, temp = 0;
        for (i = 0; i < 3; i++)
        {
            cin >> pts[i];
        }

        int max = *max_element(pts, pts + 3);

        for (i = 0; i < 3; i++)
            if (max != pts[i])
            {
                temp = temp + pts[i];
            }

        if (max == temp)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
