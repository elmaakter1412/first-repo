//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string n;
    cin >> n;
    int s = 0;
    if (n.size() == 1) {
        cout << 0 << "\n";
        return;
    }
    int cnt = 1;
    for (int i = 0; i < n.size(); i++) {
        int x = n[i] - '0';
        s += x;
    }
    while (s > 9) {
        cnt++;
        int s2 = 0;
        while (s != 0) {
            s2 += s % 10;
            s /= 10;
        }
        s = s2;
    }
    cout << cnt << "\n";
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case = 1;
    //cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}