#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    unordered_set<int> digits;
    while (x > 0) {
        digits.insert(x % 10);
        x /= 10;
    }

    int count = 0;
    while (digits.size() < n) {
        bool found = false;
        for (int digit : digits) {
            if (digit != 0) {
                digits.insert(digit);
                found = true;
                break;
            }
        }
        if (!found) {
            cout << -1 << endl;
            return 0;
        }
        count++;
    }

    cout << count << endl;
    return 0;
}
