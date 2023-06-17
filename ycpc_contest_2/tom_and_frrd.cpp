#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++){
        cin >> a[i];
        }
        int ans = 0;
        for (int i = 0; i < k; i++){
            ans += a[i];
        }
        int sum = ans;
        for (int i = k; i < n; i++) {
            sum += a[i] - a[i-k];
            ans = max(ans, sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}