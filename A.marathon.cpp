// This Code Autometically Generated by Twahanur Rahman. NOTE: Do not try to copy code, learn yourself
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, arr[3];
        cin >> a;
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
            if (arr[i] > a)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}

