#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, s, w[3];
    cin >> t;
    while (t--)
    {
        int temp = 0;
        int sum = 0;
        cin >> s;
        for (int i = 0; i < 3; i++)
        {
            cin >> w[i];
        }
        sum = accumulate(w, w + 3, 0);

        if (sum > s)
        {
            int i = 1;
            {
                sum = w[i - 1] + w[i];
                if (sum <= s)
                {
                    temp++;
                    w[i] = 0;
                }
                else
                    temp++;
                sum = w[i] + w[i + 1];
                if (sum <= s)
                {
                    temp++;
                }
                else
                    temp += 2;
            }
        }
        else
            temp++;
        cout << temp << endl;
    }
    return 0;
}