#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int i, n;
    cin >> n;

    map<string, int> names;
    string s;

    for (i = 0; i < n; i++)
    {
        cin >> s;
        names[s]++;
        if (names[s] == 1)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << s << names[s] - 1 << endl;
            ;
        }
    }

    return 0;
}
