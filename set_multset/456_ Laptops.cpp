#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    auto laptops = vector<pair<int, int>>(n);

    for (int i = 0; i < n; i++)
    {
        cin >> laptops[i].first >> laptops[i].second;
    }
    sort(laptops.begin(), laptops.end());

    // iterate laptops
    for (int j = 0; j < n - 1; j++)
    {
        if (laptops[j].second > laptops[j + 1].second)
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}