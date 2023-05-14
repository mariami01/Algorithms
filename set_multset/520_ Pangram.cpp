#include <cstring>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    bool found[26] = {false};

    cin >> n >> s;

    // transform(s.begin(), s.end(), s.begin(), ::tolower);

    // The expression tolower(s[i]) - 'a' calculates the index of
    // the corresponding boolean flag in the found array
    for (int i = 0; i < n; i++)
    {
        if (isalpha(s[i]))
        {
            found[tolower(s[i]) - 'a'] = true;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (!found[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}