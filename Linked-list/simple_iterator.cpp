#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {25, 53, 16, 27, 22};
    list<int> lst(arr, arr + 7);
    list<int>::iterator it;

    for (int i = lst.begin(); it != lst.end(); ++it)
    {
        cout << *it;
    }
}