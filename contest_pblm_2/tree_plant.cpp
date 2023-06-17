#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll y;
    cin >> y;
    ll ans = (1LL << (y + 1)) - 2;
    cout << ans << endl;
    return 0;
}
