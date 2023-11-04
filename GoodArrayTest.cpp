#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            int l = (int)ceil(i * 1.0 / k);
            if (l > sum)
            {
                sum++;
                a[i - 1] = 1;
            }
            else
                a[i - 1] = 0;
        }
        sum = 0;
        for (int i = 1; i <= n; i++)
        {
            int l = (int)ceil(i * 1.0 / k);
            if (a[n - i] == 1)
                sum++;
            if (l > sum)
            {
                sum++;
                a[n - i] = 1;
            }
        }
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
                sum++;
        }
        cout << sum << "\n";
    }
}
int main()
{
    solve();
    cout << "\n\n\n";
    return 0;
}

// abidafsanhamid@gmail.com