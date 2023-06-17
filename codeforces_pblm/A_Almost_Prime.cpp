//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[3005];
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;

    int count = 0;
    for(int i=2; i<=n; i++){
        for(int j=2; j<i; j++){
            if(a[j] == 0 && i % j == 0){
                a[i]++;
            }

        }
        if(a[i] == 2){
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}