#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> prefix(n+1, 1);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] * a[i-1];
    }
    
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] / prefix[l-1] << "\n";
    }
    
    return 0;
}