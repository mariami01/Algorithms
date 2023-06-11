#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, x;
    set<string> s;
    string str;
    cin >> n >> m;
    for (int i = 0; i < n + m; i++)
    {
        cin >> str;
        s.insert(str);
    }

    x = n + m - s.size();
    if (x % 2 == 1)
        n++;
    if (n > m)
        cout << "YES";
    else
        cout << "NO";
}
