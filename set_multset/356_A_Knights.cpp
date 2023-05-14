#include <iostream>
// #include <bits/stdc++.h>
#include <vector>
#include <set>

using namespace std;

int n, m;
vector<int> conquered_by(n + 1, 0);
set<int> winners;

int main()
{

    cin >> n >> m;

    for (int i = 0; i <= n; i++)
    {
        winners.insert(i);
    }

    for (int i = 0; i <= m; i++)
    {
        int l, r, x;
        cin >> l >> r >> x;

        auto it = winners.lower_bound(l);
        }
}