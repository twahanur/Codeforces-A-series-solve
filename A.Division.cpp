// This Code Autometically Generated by Twahanur Rahman. NOTE: Do not try to copy code, learn yourself
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, rating;
    cin >> t;
    while (t--)
    {
        cin >> rating;
        if (1900 <= rating)
            cout << "Division 1\n";
        else if (1600 <= rating && rating <= 1899)
            cout << "Division 2\n";
        else if (1400 <= rating && rating <= 1599)
            cout << "Division 3\n";
        else if (rating <= 13990)
            cout << "Division 4\n";
    }
    return 0;
}