#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k1, k2, k3;
    string a[3001];
    map<string, int> mp;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < 3 * n; j++)
        {
            cin >> a[j];
            mp[a[j]]++;
        }
        for (int j = 0; j < n; j++)
        {
            if (mp[a[j]] == 1)
                k1 = k1 + 3;
            if (mp[a[j]] == 2)
                k1 = k1 + 1;
            if (mp[a[j + n]] == 1)
                k2 = k2 + 3;
            if (mp[a[j + n]] == 2)
                k2 = k2 + 1;
            if (mp[a[j + 2 * n]] == 1)
                k3 = k3 + 3;
            if (mp[a[j + 2 * n]] == 2)
                k3 = k3 + 1;
        }
        cout << k1 << " " << k2 << " " << k3 << " " << endl;
        k1 = k2 = k3 = 0;
        mp.clear();
    }
}