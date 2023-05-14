#include <iostream>
#include <string>
#include <set>

using namespace std;

bool DistinctDigits(int year){
    // year = year+1;
    set<int> digits;
    while(year>0){
        int digit = year%10;
        if(digits.count(digit)>0){
            return false;
        }
        digits.insert(digit);
        year /=10;
    }
    return true;
}

int main()
{
    int y;
    cin>>y;
    for (int year = y + 1; year <= 9999; year++) {
        if (DistinctDigits(year)) {
            cout << year << endl;
            break;
        }
    }
    return 0;
}
