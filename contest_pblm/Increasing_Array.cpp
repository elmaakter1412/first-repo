#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,ans = 0;
    cin >> n;
    long long int arra[n];
    for(int i=0;i<n;i++){
        cin >> arra[i];
    }
    for(int i=1;i<n;i++){
        if(arra[i] < arra[i-1]){
            ans += (arra[i-1] - arra[i]);
            arra[i] = arra[i-1];
        }
    }
    cout << ans;
    return 0;
}