#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t, n, i, j, charSize;
    string s;
    set<char> charSet;

    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n >> s;
        for (j = 0; j < n; j++)
        {
            charSet.insert(s[j]);
        }

        charSize = charSet.size();
        cout << n + charSet.size() << endl;
        ;
        charSet.clear();
    }
}
