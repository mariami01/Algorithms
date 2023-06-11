#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

vector<set<int>> v(26);
int main()
{
    string s;
    int n, q, l, r, pos;
    char c;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        v[s[i] - 'a'].insert(i);
    }

    cin >> n;
    while (n--)
    {
        cin >> q;
        if (q == 1)
        {
            cin >> pos >> c;
            pos--;
            v[s[pos] - 'a'].erase(pos);
            s[pos] = c;
            v[s[pos] - 'a'].insert(pos);
        }
        else
        {
            cin >> l >> r;
            l--, r--;

            int occurrences = 0;
            for (int i = 0; i < 26; i++)
            {
                auto it = v[i].lower_bound(l);
                //  If the iterator it has not reached the end of the set,
                // it means that there are still elements to be processed in the set.
                if (it != v[i].end() && *it <= r)
                {
                    occurrences++;
                }
            }
            cout << occurrences << endl;
        }
    }
    return 0;
}