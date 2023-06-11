#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x = 0, ans = 0;
    string s;
    cin >> n >> s;
    if (n % 2 == 1)
        cout << "NO" << endl;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            ans++;
        else
            ans--;
        if (s[i] == -2)
            x++;
    }

    if (x > 0)
        cout << "NO" << endl;
    else
    {
        if (ans == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
