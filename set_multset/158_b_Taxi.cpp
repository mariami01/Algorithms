#include <iostream>

using namespace std;
int n, s, neededTaxi, group[5];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        group[s]++;
    }
    // group[1] stores the number of groups of size 1
    neededTaxi = group[4] + group[3] + group[2] / 2;

    if (group[2] % 2 == 1)
    {
        neededTaxi++;
        group[1] = group[1] - 2;
    }
    group[1] = group[1] - group[3];
    if (group[1] > 0)
        neededTaxi = neededTaxi + group[1] / 4;
    if (group[1] % 4 == 0)
        neededTaxi++;
    cout << neededTaxi;
}