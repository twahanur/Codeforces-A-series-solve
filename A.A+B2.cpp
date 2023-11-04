#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        int x = s[0] - '0'; // Convert the first character to an integer
        int y = s[2] - '0'; // Convert the third character to an integer
        cout << x + y << endl;
    }

    return 0;
}