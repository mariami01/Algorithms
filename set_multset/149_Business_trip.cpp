#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int k, a[12];
    int sum = 0, count = 0;

    cin >> k;

    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }

    // a+12 - end iterator
    // sort descending
    sort(a, a + 12, greater<int>());
    for (int i = 0; i < 12; i++)
    {
        sum += a[i];
        count++;
        if (sum >= k)
            break;
    }

    if (k == 0)
        cout << 0 << endl;
    else if (sum < k)
        cout << -1 << endl;
    else
        cout << count << endl;
    return 0;
}