#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    pair<int, int> sn;

    cin >> sn.first >> sn.second;

    // vector<pair<int, int> > dragons(sn.second);
    auto dragons = vector<pair<int, int>>(sn.second);

    // insert strength and bonus
    for (int i = 0; i < sn.second; i++)
    {
        cin >> dragons[i].first >> dragons[i].second;
    }

    // sort dragons by strength
    sort(dragons.begin(), dragons.end());
    for (int i = 0; i < sn.second; i++)
    {
        if (sn.first <= dragons[i].first)
        {
            cout << "NO" << endl;
            return 0;
        }
        else
        {
            // Kirkito defeats and gets the bonus
            sn.first += dragons[i].second;
        }
    }

    cout << "YES" << endl; // Kirito can defeat all dragons
    return 0;
}