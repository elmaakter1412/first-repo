#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

void solution() {
    int n, t = 0, l = 0;
    cin >> n;
    vector<int> b(n);

    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 0; i < n; i++) {
        t += b[i];
    }

    for (int i = 0; i < n; i++) {
        t -= b[i];
        if (t == l) {
            cout << i << "\n";
            return;
        }
        l += b[i];
    }
    cout << -1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    lli ts;
    cin >> ts;

    while (ts--) {
        solution();
    }
    return 0;
}