//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> findNegativeSubarray(ll n, ll k, vector<ll>& sub_array) {
    vector<ll> result;
    ll i = 0, j = 0;
    queue<ll> q;
    while (j < n) {
        if (sub_array[j] < 0) {
            q.push(sub_array[j]);
        }
        if (j < k - 1) {
            j++;
        }
        else {
            if (q.empty()) {
                result.push_back(0);
            }
            else {
                result.push_back(q.front());
            }
            if (sub_array[i] < 0) {
                q.pop();
            }
            i++;
            j++;
        }
    }
    return result;
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, k;
    cin >> n >> k;

    vector<ll> sub_array(n);
    for (ll i = 0; i < n; i++) {
        cin >> sub_array[i];
    }

    vector<ll> result = findNegativeSubarray(n, k, sub_array);
    for (ll i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}