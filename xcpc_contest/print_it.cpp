#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= (2 * n - 1); i++) {
        int x = i;
        if (i > n) {
            x = 2 * n - i;
        }
        for (int j = 1; j <= (n - x); j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * x - 1); j++) {
            if (x % 2 == 1) {
                cout << ">";
            } else {
                cout << "<";
            }
        }
        cout << "\n";
    }
    return 0;
}