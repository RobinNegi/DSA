#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a;
        int ai, bi;
        cin >> ai >> bi;
        if (ai < 10 && bi < 10)
            cout << ai + bi << endl;
        else
        {
            a.push_back(ai / 10);
            a.push_back(ai % 10);
            a.push_back(bi / 10);
            a.push_back(bi % 10);
            sort(a.begin(), a.end());
            int ans = a[0] * 10 + a[2] + a[1] * 10 + a[3];
            cout << ans << endl;
        }
    }

    return 0;
}
