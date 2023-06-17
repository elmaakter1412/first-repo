// Author: elmaakter14120;

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, maxx;
    cin >> a >> b;

    maxx = max({a + a - 1, b + b - 1, a + b});
    cout << maxx << endl;

    return 0;
}